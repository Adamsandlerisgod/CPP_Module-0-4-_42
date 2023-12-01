/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:06:05 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 23:18:30 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <fstream>

FileReplace::FileReplace() : _contents("")
{
	std::cout << "...File Replacer initiated..." << std::endl;
}

FileReplace::~FileReplace()
{
	std::cout << "...File Replacer destroyed..." << std::endl;
}

string&	FileReplace::getStr(void){return(this->_contents);}

bool	FileReplace::isEmpty(std::ifstream &ifs) const
{
	return (ifs.peek() == EOF);
}

int		FileReplace::readFile(const string	&filename)
{
	std::ifstream	ifs(filename.c_str());
	
	if(!(ifs.is_open()))
	{
		std::cout << "File failed to open. Do better." << std::endl;
		return (0);
	}
	else if(ifs.peek() == EOF)
	{	
		std::cout << "Empty file. Do better." << std::endl;
		return (0);
	}
	std::getline(ifs, _contents, '\0');
	return (ifs.close(), 1);
}

int		FileReplace::writeFile(const string	&filename) const
{
	string	replFile = filename + ".replace";
	std::ofstream ofs(replFile.c_str());
	
	ofs << this->_contents;
	ofs.close();
	return (0);
}

void	FileReplace::replaceAll(string &s, const string &find, const string &replace)
{
	for (size_t pos = 0; ; pos += replace.length())
	{
		pos = s.find(find, pos);
		if (pos == string::npos)
			break;
		s.erase(pos, find.length());
		s.insert(pos, replace);
	}
}





