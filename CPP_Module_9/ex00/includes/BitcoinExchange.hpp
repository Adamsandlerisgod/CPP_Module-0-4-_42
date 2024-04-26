#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstdio>

#define ERR "Error: "
#define ERROR_FILE ERR"unable to open file"
#define EMPTY_FILE ERR"unable to open file"
#define INVALID_DATE ERR"bad input "


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
	void	checkValidFile();

};


#endif