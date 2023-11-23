/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:00:03 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/23 20:31:29 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Contact
{
	private :
		string	first_name;
		string	last_name;
		string	nick_name;
		string	phone_num;
		string	darkest_secret;
	
	public :
		Contact();
		~Contact();
		void	SetData(string contact_info[5]);
		string	get_first_name(void);
		string	get_last_name(void);
		string	get_nick_name(void);
		string	get_phone_num(void);
		string	get_darkest_secret(void);
};

#endif