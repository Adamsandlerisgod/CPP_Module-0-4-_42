/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:38:10 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 20:33:30 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip> 
# include <string>
# include "Contact.hpp"
# include "Phonebook.hpp"

class Phonebook
{
private:
	Contact			_contacts[8];
	std::string		_infoPrompt[5];
	std::string  	_trimWidth(std::string input);
public:
	int		countContact;
	void	displayContact(int index);
	void	displayPhonebook();
	void	searchContact();
	void 	addContact();
	void	saveContact(std::string contactInfo[5]);
	Phonebook();
	~Phonebook();
};

#endif