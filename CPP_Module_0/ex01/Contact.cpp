/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:17:50 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/23 20:37:14 by whendrik         ###   ########.fr       */
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

void	Contact::SetData(string contact_info[5])
{
	this->first_name = contact_info[0];
	this->last_name = contact_info[1];
	this->nick_name = contact_info[2];
	this->phone_num = contact_info[3];
	this->darkest_secret = contact_info[4];
}

string	Contact::get_first_name(void)
{
	return(this->first_name);
}

string	Contact::get_last_name(void)
{
	return(this->last_name);
}

string	Contact::get_nick_name(void)
{
	return(this->nick_name);
}

string	Contact::get_phone_num(void)
{
	return(this->phone_num);
}

string	Contact::get_darkest_secret(void)
{
	return(this->darkest_secret);
}
