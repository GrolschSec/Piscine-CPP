/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:58:49 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 15:46:05 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ************************************************************************** */

BitcoinExchange::BitcoinExchange(void) {
	std::ifstream	file("data.csv");
	std::string		line;

	if (!file.is_open())
        throw CouldNotOpenFileException();
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw InvalidDBHeaderException();
	while (std::getline(file, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() 
			&& iss 
			&& (iss.peek() == EOF || iss.peek() == '\n') 
			&& verifyDate(date)) {
			this->_db[date] = rate;
		} else {
			std::cerr
				<< "Error: format in database => "  
				<< line 
				<< std::endl;
		}
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cp) {
	(void)cp;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	(void)rhs;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

/* ************************************************************************** */

unsigned int	BitcoinExchange::getActualYear(void)	const {
	unsigned int		year;
	std::time_t			result = std::time(NULL);
	std::istringstream	iss(ctime(&result));

	iss.ignore(20);
	iss >> year;
	return (year);
}

bool	BitcoinExchange::isBisextile(int year) const {
	if (year % 4 == 0) {
		return (true);
	}
	if (year % 400 == 0) {
		return (true);
	}
	return (false);
}

bool	BitcoinExchange::checkDay(int day, int month, bool isBisextile) const {
	std::map<int, int>	maxPerMonth;

	maxPerMonth[1] = 31;
	maxPerMonth[2] = isBisextile ? 29 : 28;
	maxPerMonth[3] = 31;
	maxPerMonth[4] = 30;
	maxPerMonth[5] = 31;
	maxPerMonth[6] = 30;
	maxPerMonth[7] = 31;
	maxPerMonth[8] = 31;
	maxPerMonth[9] = 30;
	maxPerMonth[10] = 31;
	maxPerMonth[11] = 30;
	maxPerMonth[12] = 31;

	if (day < 1 || day > maxPerMonth[month]) {
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::verifyDate(std::string const &date) {
	std::istringstream	iss(date);
	unsigned int		year, month, day;
    char				delim1, delim2;

	iss >> year >> delim1 >> month >> delim2 >> day;
	if (date.length() != 10 || delim1 != '-' || delim2 != '-') {
		return (false);
	}
	if (year < 1 || year > this->getActualYear()) {
		return (false);
	}
	if (month < 1 || month > 12) {
		return (false);
	}
	if (!this->checkDay(day, month, isBisextile(year))) {
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::verifyRate(double const &rate) {
	if (rate < 0) {
		return (false);
	}
	if (rate > 1000) {
		return (false);
	}
	return (true);
}

void	BitcoinExchange::printMap(void)	const {
	for (
		std::map<std::string, double>::const_iterator it = this->_db.begin();
		it != this->_db.end();
		it++
	) {
		std::cout 
			<< "Date: " 
			<< it->first 
			<< " Rate: " 
			<< it->second 
			<< std::endl;
	}
}

/* ************************************************************************** */

const char*	BitcoinExchange::CouldNotOpenFileException::what() const throw() {
	return ("could not open file.");
}

const char* BitcoinExchange::InvalidDBHeaderException::what() const throw() {
	return ("invalid database header, it should be: 'date,exchange_rate'.");
}

