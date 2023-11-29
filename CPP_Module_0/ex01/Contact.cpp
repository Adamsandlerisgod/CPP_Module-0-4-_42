/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:17:50 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 20:23:56 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	/*constructor proto*/
}

Contact::~Contact(void)
{
	/*destructor proto*/
}

void	Contact::setData(std::string contactInfo[5])
{
	this->_firstName = contactInfo[0];
	this->_lastName = contactInfo[1];
	this->_nickName = contactInfo[2];
	this->_phoneNum = contactInfo[3];
	this->_darkestSecret = contactInfo[4];
}

std::string	Contact::getFirstName(void)
{
	return(this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return(this->_lastName);
}

std::string	Contact::getNickName(void)
{
	return(this->_nickName);
}

std::string	Contact::getPhoneNum(void)
{
	return(this->_phoneNum);
}

std::string	Contact::getDarkestSecret(void)
{
	return(this->_darkestSecret);
}
