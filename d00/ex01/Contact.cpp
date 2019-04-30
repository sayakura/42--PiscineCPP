/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:56:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/29 20:04:33 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) 
{
    static std::string _map[] = {
        this->firstname,
        this->lastname,
        this->nickname,
        this->login,
        this->postalAddress,
        this->emailAddress,
        this->phoneNumber,
        this->birthdayDate,
        this->meal,
        this->underwearColor,
        this->darkestSecret
    };
    this->map = _map;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::getContact(CONTACT_FIELD_INDEX t) const
{
    return (this->map[t]);
}

void Contact::setContact(CONTACT_FIELD_INDEX t, std::string src)
{
    this->map[t] = src;
}