#include "../includes/BitcoinExchange.hpp"

int main(int ac, char **argv)
{
	if (ac == 2){
		BitcoinExchange btc = BitcoinExchange();
		btc.exchange(argv[1]);
		
	}
}
/*
You have to create a program which outputs the value of a certain amount of bitcoin
on a certain date.
This program must use a database in csv format which will represent bitcoin price
over time. This database is provided with this subject.
The program will take as input a second database, storing the different prices/dates
to evaluate.
Your program must respect these rules:
• The program name is btc.
• Your program must take a file as argument.
• Each line in this file must use the following format: "date | value".
• A valid date will always be in the following format: Year-Month-Day.
• A valid value must be either a float or a positive integer, between 0 and 1000.
*/