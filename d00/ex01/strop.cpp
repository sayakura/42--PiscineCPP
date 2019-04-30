/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strop.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:32:54 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 02:31:53 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v")
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v")
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

std::string& trim(std::string& s, const char* t = " \t\n\r\f\v")
{
    return ltrim(rtrim(s, t), t);
}

std::string& spad(std::string s)
{
    static std::string buf;
    std::string::iterator it = s.end() - 1;

    buf = std::string("          ");
    if (s.length() >= 10)
    {
        s[9] = '.';
        it = s.begin();
        std::advance(it, 9);
    }
    for (int i = 9; i >= 0; it--, i--)
        if (it >= s.begin())
            buf[i] = *it;
    return (buf);
}
