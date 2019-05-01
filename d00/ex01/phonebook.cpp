/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:00:25 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 19:06:52 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

extern int              g_current_contact_index;

void                    do_add(Contact &cont)
{
    std::string input;
    bool        invalid;

    if (g_current_contact_index == MAX_CONTACT_LIST_LEN)
    {
        std::cout << RED + "PhoneBook is full" + END << std::endl;
        return ;
    }
    for (CONTACT_FIELD_INDEX index = CT_FIRSTNAME; index < MAX_CONTACT_TYPE_LEN;
        index++)
        do {
            invalid = true;
            std::cout << "Please Enter " + g_prompts[index] + " :" << std::endl;
            std::cout << "> ";
            std::getline(std::cin, input);
            if (std::cin.eof() || trim(input).empty())
                continue ;
            if (input.length() > 100)
            {
                std::cout << RED + "That's a bit too long bro." + END << std::endl;
                continue ;
            }
            cont.setContact(index, input);
            invalid = false;
        } while (invalid);
    std::cout << GREEN + "[ADD] - Done" + END << std::endl;
    g_current_contact_index++;
}

void                    do_search(Contact (&contact_list)[MAX_CONTACT_LIST_LEN])
{
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
        _temp_str = std::to_string(index);
        std::cout << "|" + spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_FIRSTNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_LASTNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        _temp_str = contact_list[index].getContact(CT_NICKNAME);
        std::cout <<  + "|" +  spad(_temp_str);
        std::cout << "|" << std::endl;
    }
    std::cout << "Please Enter a index to view more detailed info: " << std::endl;
    std::cout << "> ";
    std::getline(std::cin, _temp_str);
    try 
    {
        _input_index = std::stoi(_temp_str);
    }
    catch(...)
    {   
        std::cout << RED + "Invalid Input" + END << std::endl;
        return ;
    }
    if (_input_index >= 0 && _input_index <= g_current_contact_index - 1 && std::isdigit(_temp_str[0]))
    {
        for (CONTACT_FIELD_INDEX index = CT_FIRSTNAME; index < MAX_CONTACT_TYPE_LEN;
                                                                            index++)
            std::cout << g_prompts[index] + ": " + MAGENTA + 
                contact_list[_input_index].getContact(index)  + END << std::endl;
    }
    else
        std::cout << RED + "Invalid Input" + END  << std::endl;
}

void    command_parse(std::string input, Contact (&contact_list)[MAX_CONTACT_LIST_LEN])
{
    if (input == "EXIT" || input == "exit")
        ::exit(EXIT_SUCCESS);
    else if (input == "ADD" || input == "add")
        do_add(contact_list[g_current_contact_index]);
    else if (input == "SEARCH" || input == "search")
        do_search(contact_list);
    else
        std::cout << RED + "Invalid Input" + END  << std::endl;
}

void     phonebook(void)
{
    Contact contact_list[MAX_CONTACT_LIST_LEN];
    
    std::string input;
    std::cout << MAGENTA + "Phone Book" + END << std::endl;
    std::cout << "Usage: [ADD][SEARCH][EXIT] instructions" << std::endl;
    for (;;)
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
    return ;
}