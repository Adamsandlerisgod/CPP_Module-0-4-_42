/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:32:47 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/23 13:38:44 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook()
{
    std::cout << "Initiating Phonebook program..." << std::endl;
    this->_infoPrompt[0] = "First Name : ";
    this->_infoPrompt[1] = "Last Name : ";
    this->_infoPrompt[2] = "Nickname : ";
    this->_infoPrompt[3] = "Phone number : ";
    this->_infoPrompt[4] = "Darkest Secret : ";
    this->countContact = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Exiting the phonebook..." << std::endl;
}   

void    Phonebook::addContact()
{
    Contact contact;
    std::string  buffer[5];

    for(int i = 0; i < 5; i++)
    {
        std::cout << this->_infoPrompt[i];
        std::getline(std::cin, buffer[i]);
        if (buffer[i].empty())
        {
            std::cout << "It can't be empty, try again" << std::endl;
            i--;
        }
    }
    this->saveContact(buffer);
    std::cout << "You have succesfully added a contact" << std::endl;
}

void    Phonebook::searchContact()
{
    int index = 0;
    std::string  input;

    if (this->countContact == 0)
    {
        std::cout << "Add a contact first, before you Search it" << std::endl;    
        return ;
    }
    displayPhonebook();
    std::cout << "Enter Index :" << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Cannot be empty should be a number between 0 - 7" << std::endl;
        std::getline(std::cin, input);
    }
   std::istringstream	iss(input);
	if (iss >> index && iss.eof())
	{
		if (index >= 0 && index < this->countContact)
            return (this->displayContact(index), void ());
		else
			std::cout << "Index are not on the list" << std::endl;
	}
	else
		std::cout << "Invalid input. Please enter number." << std::endl; 
}

void    Phonebook::displayContact(int index)
{

	std::cout << this->_infoPrompt[0] << this->_contacts[index].getFirstName() << std::endl;
	std::cout << this->_infoPrompt[1] << this->_contacts[index].getLastName() << std::endl;
	std::cout << this->_infoPrompt[2] << this->_contacts[index].getNickName() << std::endl;
	std::cout << this->_infoPrompt[3] << this->_contacts[index].getPhoneNum() << std::endl;
	std::cout << this->_infoPrompt[4] << this->_contacts[index].getDarkestSecret() << std::endl;

}

void    Phonebook::displayPhonebook()
{
    std::cout << "|   Index  | Firstname| Lastname | Nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < this->countContact; i++)
    {
    	std::cout << "|" << std::setw(10) << std::right << i ;
        std::cout << "|" << std::setw(10) << std::right << this->_trimWidth(this->_contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << std::right << this->_trimWidth(this->_contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << std::right << this->_trimWidth(this->_contacts[i].getNickName()) << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
}

std::string  Phonebook::_trimWidth(std::string input)
{
    if (input.length() > 10)
    {
        input.resize(9);
        input.append(".");
    }
    return (input);
}

void    Phonebook::saveContact(std::string contactInfo[5])
{
    static int  index = 0;

    if (index == 8)
        index = 0;
    this->_contacts[index].setData(contactInfo);
    if (this->countContact < 8)
        countContact += 1;
    index += 1;
}




