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
	class	Contact	contacts[8];
	string			info_prompt[5];
public:
	int	Count_contact;
	void 	Add_Contact();
	void	Save_Contact(string contact_info[5]);
	Phonebook();
	~Phonebook();
};

#endif