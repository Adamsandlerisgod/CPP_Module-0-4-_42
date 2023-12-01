/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:06:09 by whendrik          #+#    #+#             */
/*   Updated: 2023/12/01 22:54:55 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILE_REPLACE_HPP
#define	FILE_REPLACE_HPP
#include <iostream>
#include <fstream>

typedef std::string string;

class FileReplace
{
	private:
		string	_contents;
	public:
		FileReplace();
		~FileReplace();
		string	&getStr(void);
		bool	isEmpty(std::ifstream &ifs) const;
		int		readFile(const string	&filename);
		int		writeFile(const string	&filename) const;
		void	replaceAll(string &s, const string &find, const string &replace);
};



#endif