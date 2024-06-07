#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <cctype>
#include <cstdlib>

int	str_to_int(const std::string &stri){
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

int evaluateRPN(const std::string& expression) {
    std::stack<int> stack;
	std::istringstream iss(expression);
	std::string tok;

	while (iss >> tok){
		if (isdigit(tok[0]))
			stack.push(str_to_int(tok));
		else if (tok.size() == 1 && ispunct(tok[0])){
			int operand_2 = stack.top(); 
			stack.pop();
			int operand_1 = stack.top(); 
			stack.pop();
			int res;
			switch (tok[0]){
			case '+': res = operand_1 + operand_2;
				break;
			case '-': res = operand_1 - operand_2;
				break;
			case '*': res = operand_1 * operand_2;
				break;
			case '/': 
				if (operand_2 == 0){
					std::cerr << "Error: Cannot Divide By Zero" << std::endl; 
					exit(EXIT_FAILURE);
				}
				res = operand_1 / operand_2;
				break;
			default:
				std::cerr << "Invalid operation (Only: +, -, *, /)" << std::endl;
				exit(EXIT_FAILURE);
			}
			stack.push(res);
		}
		else{
			std::cerr << "Invalid token (Only single, positive digits or +, -, *, /)" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
		return (stack.top());
}




#endif