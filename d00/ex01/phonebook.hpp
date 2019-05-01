/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:57:55 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 19:02:38 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <sstream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string MAGENTA = "\033[35m";
const std::string END = "\033[0m";
const int MAX_CONTACT_LIST_LEN = 8;

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
int                         g_current_contact_index;

#endif