/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:38:10 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/23 20:48:42 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip> 
# include <string>
# include "Contact.hpp"
# include "Phonebook.hpp"

using namespace std;

class Phonebook
{
private:
	Contact			contacts[8];
	string			info_prompt[5];
public:
	int		Count_contact;
	void	Display_Contact(int index);
	void	Display_Phonebook();
	void	Search_Contact();
	void 	Add_Contact();
	void	Save_Contact(string contact_info[5]);
	string  trim_Width(string input);
	Phonebook();
	~Phonebook();
};

#endif