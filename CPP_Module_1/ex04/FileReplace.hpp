/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:06:09 by whendrik          #+#    #+#             */
/*   Updated: 2024/02/16 17:32:00 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILE_REPLACE_HPP
#define	FILE_REPLACE_HPP
#include <iostream>
#include <fstream>

class FileReplace
{
	private:
		std::string	_contents;
	public:
		FileReplace();
		~FileReplace();
		std::string	&getStr(void);
		bool	isEmpty(std::ifstream &ifs) const;
		int		readFile(const std::string	&filename);
		int		writeFile(const std::string	&filename) const;
		void	replaceAll(std::string &s, const std::string &find, const std::string &replace);
};



#endif