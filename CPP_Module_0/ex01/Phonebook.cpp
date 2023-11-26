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
    cout << "Initiating Phonebook program..." << endl;
    this->info_prompt[0] = "First Name : ";
    this->info_prompt[1] = "Last Name : ";
    this->info_prompt[2] = "Nickname : ";
    this->info_prompt[3] = "Phone number : ";
    this->info_prompt[4] = "Darkest Secret : ";
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

    for(int i = 0; i < 5; i++)
    {
        cout << this->info_prompt[i];
        getline(cin, buffer[i]);
        if (buffer[i].empty())
        {
            cout << "It can't be empty, try again" << endl;
            i--;
        }
    }
    this->Save_Contact(buffer);
    cout << "You have succesfully added a contact" << endl;
}

void    Phonebook::Search_Contact()
{
    int index = 0;
    string  input;

    if (this->Count_contact == 0)
    {
        cout << "Add a contact first, before you Search it" << endl;    
        return ;
    }
    Display_Phonebook();
    cout << "Enter Index :" << endl;
    getline(cin, input);
    while (input.empty())
    {
        cout << "Cannot be empty should be a number between 0 - 7" << endl;
        getline(cin, input);
    }
   istringstream	iss(input);
	if (iss >> index && iss.eof())
	{
		if (index >= 0 && index < this->Count_contact)
            return (this->Display_Contact(index), void ());
		else
			cout << "Index are not on the list" << endl;
	}
	else
		cout << "Invalid input. Please enter number." << endl; 
}

void    Phonebook::Display_Contact(int index)
{

	cout << this->info_prompt[0] << this->contacts[index].get_first_name() << endl;
	cout << this->info_prompt[1] << this->contacts[index].get_last_name() << endl;
	cout << this->info_prompt[2] << this->contacts[index].get_nick_name() << endl;
	cout << this->info_prompt[3] << this->contacts[index].get_phone_num() << endl;
	cout << this->info_prompt[4] << this->contacts[index].get_darkest_secret() << endl;

}

void    Phonebook::Display_Phonebook()
{
    cout << "|   Index  | Firstname| Lastname | Nickname |" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < this->Count_contact; i++)
    {
    	cout << "|" << setw(10) << right << i ;
        cout << "|" << setw(10) << right << this->trim_Width(this->contacts[i].get_first_name());
        cout << "|" << setw(10) << right << this->trim_Width(this->contacts[i].get_last_name());
        cout << "|" << setw(10) << right << this->trim_Width(this->contacts[i].get_nick_name()) << "|" << endl;
        cout << "---------------------------------------------" << endl;
    }
}

string  Phonebook::trim_Width(string input)
{
    if (input.length() > 10)
    {
        input.resize(9);
        input.append(".");
    }
    return (input);
}

void    Phonebook::Save_Contact(string contact_info[5])
{
    static int  index = 0;

    if (index == 8)
        index = 0;
    this->contacts[index].SetData(contact_info);
    if (this->Count_contact < 8)
        Count_contact += 1;
    index += 1;
}




