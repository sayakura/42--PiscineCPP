/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:53:02 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/29 20:04:20 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CPP
# define CONTACT_CPP
# define MAX_CONTACT_TYPE_LEN 11
# define MAX_CONTACT_LIST_LEN 8 
# define CONTACT_FIELD_INDEX int
#include <string>

enum  E_CONTACT_FIELDS {
    CT_FIRSTNAME,
    CT_LASTNAME,
    CT_NICKNAME,
    CT_LOGIN,
    CT_POSTALADDRESS,
    CT_EMAILADDRESS,
    CT_PHONENUMBER,
    CT_BIRTHDAYDATE,
    CT_MEAL,
    CT_UNDERWEARCOLOR,
    CT_DARKESTSECRET
};

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string meal;
        std::string underwearColor;
        std::string darkestSecret;
        std::string *map;
    public:
        Contact(void);
        ~Contact(void);
        std::string getContact(CONTACT_FIELD_INDEX) const;
        void        setContact(CONTACT_FIELD_INDEX, std::string prop);
};

#endif