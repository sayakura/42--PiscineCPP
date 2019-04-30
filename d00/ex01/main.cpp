/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:36:58 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 02:44:05 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <sstream>

extern std::string&         trim(std::string& s, const char* t =  " \t\n\r\f\v");
extern std::string&         spad(std::string s);
static std::string          g_prompts[MAX_CONTACT_TYPE_LEN] =
{
    "Firstname",
    "Lastname",
    "Nickname",
    "Login",
    "Postal Address",
    "Email Address",
    "Phone Number",
    "Birthday Date",
    "Meal",
    "Underwear Color",
    "Darkest Secret",
};
int                     g_current_contact_index;

void                    do_add(Contact &cont)
{
    std::string input;

    if (g_current_contact_index == MAX_CONTACT_TYPE_LEN)
    {
        std::cout << "PhoneBook is full" << std::endl;
        return ;
    }
    for (CONTACT_FIELD_INDEX index = CT_FIRSTNAME; index < MAX_CONTACT_TYPE_LEN;
        index++)
        do {
            std::cout << "Please Enter " + g_prompts[index] + " :" << std::endl;
            std::cout << "> ";
            std::getline(std::cin, input);
            cont.setContact(index, input);
        } while (std::cin.eof() || trim(input).empty());
    std::cout << "ADD - Done." << std::endl;
    g_current_contact_index++;
}

void                    do_search(Contact (&contact_list)[MAX_CONTACT_LIST_LEN])
{
    std::stringstream _ss;
    std::string       _temp_str;
    int               _input_index;

    std::cout << "|   INDEX  |FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    if (g_current_contact_index == 0)
    {
        std::cout << "|                NO RECORD                  |" << std::endl;
        return ;
    }
    for (int index = 0; index < g_current_contact_index; index++)
    {
        _ss << index; // c++ 98 std. for c11 you can just to_string() it.
        _temp_str = _ss.str();
        std::cout << "|" + spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_FIRSTNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_LASTNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_NICKNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        std::cout << "|" << std::endl;
    }
    do {
        std::cout << "Please Enter a index to view more detailed info: " << std::endl;
        std::cout << "> ";
        std::getline(std::cin, _temp_str);
        _input_index = std::stoi(_temp_str);
        if (_input_index <= 0)
        {
            if (_input_index == 0 && _temp_str[0] != '0')
                std::cout << "Invalid Input" << std::endl;
            else
            {
                for (CONTACT_FIELD_INDEX index = CT_FIRSTNAME; index < MAX_CONTACT_TYPE_LEN;
                                                                                    index++)
                    std::cout << g_prompts[index] + ": " + contact_list[index].getContact(index) << std::endl;
            }
        }
    } while (std::cin.eof() || trim(_temp_str).empty());
}

void    command_parse(std::string input, Contact (&contact_list)[MAX_CONTACT_LIST_LEN])
{
    if (input == "EXIT")
        ::exit(EXIT_SUCCESS);
    else if (input == "ADD")
        do_add(contact_list[g_current_contact_index]);
    else if (input == "SEARCH")
        do_search(contact_list);
    else
        std::cout << "Invalid Command." << std::endl;
}

int     main(int ac, char **av)
{
    Contact contact_list[MAX_CONTACT_LIST_LEN];
    
    std::string input;
    std::cout << "Phone Book" << std::endl;
    std::cout << "Usage: [ADD][SEARCH][EXIT] instructions" << std::endl;
    while (1)
    {
        std::cout << "> ";
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "gg goodbye." << std::endl;
            ::exit(EXIT_SUCCESS);
        }
        command_parse(input, contact_list);
    }
    return (0);
}