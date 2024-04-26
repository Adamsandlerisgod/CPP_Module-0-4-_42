#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : _dataname("data.csv"), _fileinput("input.txt"){
	addData();
}

BitcoinExchange::BitcoinExchange(std::string input) : _dataname("data.csv"), _fileinput(input){
	addData();
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destructor called" << std::endl;
}



std::string BitcoinExchange::trim(std::string line){
	line.erase(0, line.find_first_not_of(" \t\n\f\v\r"));
	line.erase(line.find_last_not_of(" \t\n\f\v\r") + 1);
	return (line);
}

void	BitcoinExchange::addData(void){
	std::ifstream file(_dataname.c_str());
    std::string line;

    std::getline(file, line); // skip first line
    while (std::getline(file, line))
    {
        size_t delim = line.find(',');

        std::string date = trim(line.substr(0, delim));
        std::string value = trim(line.substr(delim + 1, line.length()));


        _data[date] = atof(value.c_str());
    }

    file.close();
	for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it) {
        std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
    }
}

void	BitcoinExchange::checkValidFile(){
	std::ifstream file(_fileinput.c_str());
	if (!file.is_open()){
		std::cerr << ERROR_FILE << std::endl;
		exit(1);
	}
	if (!file.peek() == EOF){
		std::cerr << EMPTY_FILE << std::endl;
		exit(1);
	}
}

int	BitcoinExchange::str_to_int(std::string string){

}

bool  BitcoinExchange::CheckValidDate(std::string date){
	bool pass = true;
	if (!(date.length() != 10 || date.at(4) != '-' || date.at(7) != '-'))
	{
		int year = str_to_int(date.substr(0,4));
		int month = str_to_int(date.substr(5,2));
		int day = str_to_int(date.substr(8,2));
	}	
	else if ()
}

bool  BitcoinExchange::CheckValidValue(std::string value){

}

void	BitcoinExchange::exchange(std::string data_base){
	checkValidFile();
	std::ifstream file(_fileinput.c_str());
	std::string line;

	std::getline(file, line); // skip first line
    while (std::getline(file, line))
    {

        size_t delim = line.find('|');

        std::string date = trim(line.substr(0, delim));
		checkValidDate(date);
        std::string value = trim(line.substr(delim + 1, line.length()));
		checkValidValue(value);

        _data[date] = atof(value.c_str());
    }

    file.close();
}

void	BitcoinExchange::iterInput()
