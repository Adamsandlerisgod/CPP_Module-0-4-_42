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




void	BitcoinExchange::addData(void){
	std::ifstream file(_dataname.c_str());
    std::string line;

    std::getline(file, line); // skip first line
    while (std::getline(file, line))
    {
        size_t delim = line.find(',');

        std::string date = trim(line.substr(0, delim));
        std::string value = trim(line.substr(delim + 1, line.length()));
		// Check if the date already exists in the map
        if (_data.find(date) != _data.end()) {
		// Decide what to do if the date already exists (update/ignore)
		// For now, let's ignore duplicate dates
            continue;
        }

        _data[date] = atof(value.c_str());
    }
    file.close();
}


// std::string	BitcoinExchange::closest_date(std::string date){
// 	std::map<std::string, float>::iterator lower = _data.lower_bound(date);
//     std::map<std::string, float>::iterator upper = _data.upper_bound(date);

// 	std::cout << "Inshallah = " << lower->first << " also" << lower->second << std::endl;
// 	std::cout << "Mashallah = " << upper->first << " also" << upper->second << std::endl;

// 	if (_data.find(date) != _data.end()){
// 		std::cout << "Wiggler" << std::endl;
// 		return (date);
// 	}
//     // If lower is the first element or upper is the last element, return the corresponding exchange rate
// 	if (lower == _data.begin())
// 	{
// 		std::cout << "Lower than it should be" << std::endl;
// 		return lower->first;
// 	}
//     if (lower != _data.begin()) {
// 		std::cout << "lowering lower" << std::endl;
//         --lower;
//     } else if (upper == this->_data.end()) {
// 		std::cout << "too high up" << std::endl;
//         return (upper--)->first;
//     }

//     int lowerDistance = abs(str_to_int(date) - str_to_int(lower->first));
//     int upperDistance = abs(str_to_int(upper->first) - str_to_int(date));
// 	std::cout << lowerDistance << " versus " << upperDistance << std::endl;
// 	if (lowerDistance <= upperDistance)
// 		return lower->first;
// 	else
// 		return upper->first;		
// }
std::string BitcoinExchange::closest_date(std::string date) {
    std::map<std::string, float>::iterator lower = _data.lower_bound(date);
    std::map<std::string, float>::iterator upper = _data.upper_bound(date);

    if (lower == _data.begin() && upper == _data.end()) {
        // No dates in the map
        std::cerr << "No dates found in the map." << std::endl;
        return ""; // Return an empty string or handle the case appropriately
    } else if (lower == _data.begin()) {
        // No lower bound, return upper bound
        return upper->first;
    } else if (upper == _data.end()) {
        // No upper bound, return lower bound
        --lower;
        return lower->first;
    } else {
        // Both lower and upper bounds exist, compare distances
		--lower;
		std::cout << lower->first << " == versus == " << upper->first << std::endl;
        int lowerDistance = abs(atof(date) - str_to_int(lower->first));
        int upperDistance = abs(str_to_int(upper->first) - str_to_int(date));
		std::cout << lowerDistance << " == versus == " << upperDistance << std::endl;

        
        if (lowerDistance <= upperDistance)
            return lower->first;
        else
            return upper->first;
    }
}
void	BitcoinExchange::calculation(std::string date, float value){
	std::string correct_date;
    std::cout << "Looking up date: " << date << std::endl;
	correct_date = closest_date(date);
	std::cout << "AFRICA" << _data[date] << std::endl;
	std::cout << "correct date = " << correct_date << std::endl;
	std::cout << _data[correct_date] << " x " << value << " = " << _data[correct_date] * value << std::endl;
	std::cout << date << " => " << value << " = " << _data[correct_date] * value << std::endl;
}

void	BitcoinExchange::exchange(std::string data_base){
	checkValidFile();
	std::ifstream file(data_base.c_str());
	std::string line;

	std::getline(file, line); // skip first line
    while (std::getline(file, line))
    {

        size_t delim = line.find('|');

        std::string date = trim(line.substr(0, delim));
		if (checkValidDate(date) == false){
			std::cerr << INVALID_DATE << date << std::endl;
			continue;
		}
        std::string value = trim(line.substr(delim + 1, line.length()));
		if (checkValidValue(value) == false)
			continue;
        // _data[date] = atof(value.c_str());
		calculation(date, str_to_flt(value));
    }

    file.close();
}

std::string BitcoinExchange::trim(std::string line){
	line.erase(0, line.find_first_not_of(" \t\n\f\v\r"));
	line.erase(line.find_last_not_of(" \t\n\f\v\r") + 1);
	return (line);
}

bool BitcoinExchange::LeapYearCheck(const int &year){
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        } else {
            return true;
        }
    }
    return false;
}

bool  BitcoinExchange::checkValidDate(std::string date){
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (date.length() == 10 && date.at(4) == '-' && date.at(7) == '-')
	{
		int year = str_to_int(date.substr(0,4));
		int month = str_to_int(date.substr(5,2));
		int day = str_to_int(date.substr(8,2));
		if (year < 0 || year > 9999 || month <= 0 || month > 12 || day <= 0 || day > 31)
			return (false);
		if (LeapYearCheck(year) == true)
			daysInMonth[2] = 29;
		if (day > daysInMonth[month])
			return (false);
	}
	return (true);	
}

bool  BitcoinExchange::checkValidValue(std::string value){
	std::cout << "Valid = " << value << std::endl;
	if (value.length() != 0  && value.at(0) != '-'){
		float val = str_to_flt(value.c_str());
		std::cout << val << std::endl;
		
		if (val < 0){
			std::cerr << NEG_NUM << std::endl;
			return (false);
		}
		if (val > 1000){
			std::cerr << TOO_LARGE << std::endl;
			return (false);
		}
		return (true);
	}
	return (false);
}

void	BitcoinExchange::checkValidFile(){
	std::ifstream file(_fileinput.c_str());
	if (!file.is_open()){
		std::cerr << ERROR_FILE << std::endl;
		exit(1);
	}
	if (file.peek() == EOF){
		std::cerr << EMPTY_FILE << std::endl;
		exit(1);
	}
}

int	BitcoinExchange::str_to_int(const std::string &stri){
	try{
	std::stringstream ss(stri);
	int value;
	ss >> value;
	return (value);
	}
	catch (std::exception &e){
		return (-1);
	}
}

int	BitcoinExchange::str_to_flt(const std::string &stri){
	try{
	std::stringstream ss(stri);
	float value;
	ss >> value;
	return (value);
	}
	catch (std::exception &e){
		return (-1);
	}
}

std::string BitcoinExchange::date_diff(const std::string &date_1, const std::string &date_2){
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year_1 = str_to_int(date_1.substr(0,4));
	int month_1 = str_to_int(date_1.substr(5,2));
	int day_1 = str_to_int(date_1.substr(8,2));
	int year_2 = str_to_int(date_2.substr(0,4));
	int month_2 = str_to_int(date_2.substr(5,2));
	int day_2 = str_to_int(date_2.substr(8,2));
	if (year_1 != year_2)
		while ()

}
