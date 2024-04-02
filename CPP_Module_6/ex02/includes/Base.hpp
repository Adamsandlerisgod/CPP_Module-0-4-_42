/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:30:14 by whendrik          #+#    #+#             */
/*   Updated: 2024/04/02 19:50:36 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
# define Base_HPP
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
	public:
		virtual	~Base(void){}
};

class A: public Base{};	
class B: public Base{};	
class C: public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif // Base_HPP
