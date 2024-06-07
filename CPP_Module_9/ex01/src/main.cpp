#include "../includes/RPN.hpp"

int main(int ac, char **argv)
{
	if (ac != 2){
		std::cerr << "Usage: \"./RPN\" \"Expression in form of RPN \"" << std::endl;
		exit (EXIT_FAILURE);
	}
	std::string expression = argv[1];
	int result = evaluateRPN(argv[1]);
	std::cout << result << std::endl;
	return (EXIT_SUCCESS);
}
