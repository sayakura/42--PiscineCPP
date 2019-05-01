/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:56:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 20:36:16 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) 
{
    this->map[CT_FIRSTNAME] = &this->firstname;
    this->map[CT_LASTNAME] = &this->lastname;
    this->map[CT_NICKNAME] = &this->nickname;
    this->map[CT_LOGIN] = &this->login;
    this->map[CT_POSTALADDRESS] = &this->postalAddress;
    this->map[CT_EMAILADDRESS] = &this->emailAddress;
    this->map[CT_PHONENUMBER] = &this->phoneNumber;
    this->map[CT_BIRTHDAYDATE] = &this->birthdayDate;
    this->map[CT_MEAL] = &this->meal;
    this->map[CT_UNDERWEARCOLOR] = &this->underwearColor;
    this->map[CT_DARKESTSECRET] = &this->darkestSecret;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::getContact(CONTACT_FIELD_INDEX t) const
{
    return *(this->map[t]);
}

void Contact::setContact(CONTACT_FIELD_INDEX t, std::string src)
{
    *(this->map[t]) = src;
}