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

using namespace std;

Phonebook::Phonebook()
{
    this->info_prompt[0] = "Type First Name : ";
    this->info_prompt[1] = "Type Last Name : ";
    this->info_prompt[2] = "Type Nickname : ";
    this->info_prompt[3] = "Type Phonenumber : ";
    this->info_prompt[4] = "Type Darkest Secret : ";
    this->Count_contact = 0;
}

Phonebook::~Phonebook()
{
    cout << "Exiting the phonebook..." << endl;
}   

void    Phonebook::Add_Contact()
{
    Contact contact;
    string  buffer[5];

    for(int i = 0, i < 5, i++)
    {
        cout << this->info_prompt[i];
        if (!getline(cin, buffer[i]));
        {
            cout << "It can't be empty, try again" << endl;
            i--;
        }
    }
    this->Save_Contact(buffer);
    cout << "You have succesfully added a contact" << endl;
}

void    Phonebook::Save_Contact(string contact_info[5])
{
    static int  index = 0;

    if (index == 8)
        index = 0;
    this->contacts->SetData(contact_info);
    if (this->Count_contact < 8)
        Count_contact += 1;
    index += 1;
}




