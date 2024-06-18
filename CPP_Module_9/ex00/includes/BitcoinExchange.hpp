#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <limits>

#define ERR "Error: "
#define ERROR_FILE ERR"unable to open file"
#define EMPTY_FILE ERR"unable to open file"
#define INVALID_DATE ERR"bad input => "
#define INVALID_VAL ERR"bad input => "
#define EMPTY_INPUT ERR"empty input => "
#define NEG_NUM ERR"not a positive integer."
#define TOO_LARGE ERR"too large of an integer."


class BitcoinExchange{
	private:
		std::string	_dataname;
		std::string	_fileinput;
		std::map<std::string, float>	_data;
		void addData();


	public:
	BitcoinExchange();
	BitcoinExchange(std::string filename);
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &rhs);
	BitcoinExchange &operator=(const BitcoinExchange &rhs);

	void	exchange(std::string data_base);
	std::string trim(std::string line);
	void	calculation(std::string date, float value);
	std::string	closest_date(std::string date);


	bool LeapYearCheck(const int &year);

	bool  checkValidDate(std::string date);
	bool  checkValidValue(std::string value);
	void	checkValidFile();
	int	str_to_int(const std::string &stri);
	float	str_to_flt(const std::string &stri);
	int date_diff(const std::string &date_1, const std::string &date_2);


};


#endif