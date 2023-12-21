/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:58:49 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 13:28:26 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ************************************************************************** */

BitcoinExchange::BitcoinExchange(void) {
	std::ifstream	file("data.csv");
	std::string		line;

	if (!file.is_open())
        throw CouldNotOpenDBException();
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw InvalidDBHeaderException();
	while (std::getline(file, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;
		std::string			remaining;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() 
			&& iss 
			&& (iss.peek() == EOF || iss.peek() == '\n') 
			&& verifyDate(date)
			&& rate >= 0
			&& rate <= std::numeric_limits<int>::max()
			&& std::isdigit(line[11])) {
			this->_db[date] = rate;
		} /*else {
			std::cerr
				<< "DB Error: invalid syntax "
				<< line
				<< std::endl;
		}*/
	}
	file.close();
	if (this->_db.empty()) {
		throw EmptyDatabaseException();
	}
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
	if (year % 400 == 0) {
		return (true);
	} else if (year % 100 == 0) {
		return (false);
	} else if (year % 4 == 0) {
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

	for (size_t i = 0; i < date.size(); i++) {
		if (i != 4 && i != 7 && !std::isdigit(date[i])) {
			return (false);
		}
	}
	iss >> year >> delim1 >> month >> delim2 >> day;
	if (date.length() != 10 || delim1 != '-' || delim2 != '-') {
		return (false);
	} if (year < 1 || year > this->getActualYear()) {
		return (false);
	} if (month < 1 || month > 12) {
		return (false);
	} if (!this->checkDay(day, month, isBisextile(year))) {
		return (false);
	}
	return (true);
}

/* ************************************************************************** */

bool	BitcoinExchange::verifyValue(double const &rate) {
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

void	BitcoinExchange::process_file(char *argv) {
	std::ifstream	file;
	std::string		line;

	if (!argv) {
		throw CouldNotOpenFileException();
	}
	file.open(argv);
	if (!file.is_open()) {
		throw CouldNotOpenFileException();
	}
	std::getline(file, line);
	if (line != "date | value") {
		throw InvalidInputHeaderException();
	}
	while (std::getline(file, line)) {
		exchange(line);
	}
}

void	BitcoinExchange::exchange(std::string const &line) {
	std::istringstream	iss(line);
	std::string			date;
	char				sep;
	double				value;
	std::string			remaining;
	
	if (!(iss >> date >> sep >> value)) {
		std::cerr
			<< "Error: cannot parse line => "
			<< line
			<< std::endl;
	} else if (sep != '|' || !verifyDate(date) 
		|| line[10] != ' ' || line[11] != '|' 
		|| line[12] != ' ' || (!isdigit(line[13])
		&& line[13] != '-')) {
		std::cerr
			<< "Error: bad input => "
			<< line 
			<< std::endl;
	} else if (value < 0){
		std::cerr
			<< "Error: not a positive number."
			<< std::endl;
	} else if (value > 1000) {
		std::cerr
			<< "Error: too large number."
			<< std::endl;
	} else if (iss >> remaining && !remaining.empty()) {
		std::cerr
			<< "Error: bad input => "
			<< line
			<< std::endl;
	} else {
		std::cout
			<< date
			<< " => "
			<< value
			<< " = "
			<< getClosestRate(date) * value
			<< std::endl;
	}
}

double	BitcoinExchange::getClosestRate(std::string &date) {
	std::map<std::string, double>::iterator it = _db.find(date);
	std::map<std::string, double>::reverse_iterator rit;
	if (it != _db.end()) {
		return (it->second);
	}
    for (rit = _db.rbegin(); rit != _db.rend(); ++rit) {
        if (rit->first < date) {
            return rit->second;
        }
    }
	return (0);
}

/* ************************************************************************** */

const char*	BitcoinExchange::CouldNotOpenFileException::what() const throw() {
	return ("could not open file.");
}

const char* BitcoinExchange::InvalidDBHeaderException::what() const throw() {
	return ("invalid database header, it should be: 'date,exchange_rate'.");
}

const char* BitcoinExchange::InvalidInputHeaderException::what() const throw() {
	return ("invalid input header, it should be: 'date | value'");
}

const char*	BitcoinExchange::EmptyDatabaseException::what() const throw() {
	return ("database is empty.");
}

const char*	BitcoinExchange::CouldNotOpenDBException::what() const throw() {
	return ("could not open database.");
}
