/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:35:41 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 19:49:11 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"


void	Account::_displayTimestamp( void )
{
	time_t          timev = time(&timev);
	struct tm       *stamp = localtime(&timev);
    std::string     out_str; 

	std::cout << (1900 + stamp->tm_year);
	out_str += (stamp->tm_mon >= 9) 
            ? std::to_string(stamp->tm_mon + 1)
            : ("0" + (stamp->tm_mon + 1));
    out_str += (stamp->tm_mday > 9) 
            ? std::to_string(stamp->tm_mday)
            : ("0" + (stamp->tm_mday));
   out_str += (stamp->tm_hour > 9) 
            ? ("_" + stamp->tm_hour)
            : ("_0" + (stamp->tm_hour));
	if (stamp->tm_hour > 9)
		out_str +=  "_" + stamp->tm_hour;
	else
		out_str +=  "_0" + stamp->tm_hour;
	if (stamp->tm_min > 9)
		out_str += stamp->tm_min;
	else
		out_str +=  "0" + stamp->tm_min;
	if (stamp->tm_sec > 9)
		out_str += stamp->tm_sec;
	else
		out_str += "0" +stamp->tm_sec;
    std::cout << out_str;
	return ;
}

Account::Account(int amnt)
{
	this->_nbAccounts = this->_nbAccounts + 1;
	this->_totalAmount = this->_totalAmount + amnt;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = amnt;

	std::cout << "[";
    _displayTimestamp();
    std::cout << "] index:" << (this->_accountIndex - 1) <<
		";amount:" << this->_amount << ";created" << std::endl;
}
