/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:35:41 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 20:31:06 by qpeng            ###   ########.fr       */
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
	struct tm       *tm = localtime(&timev);
    std::string     outStr; 

	std::cout << (1900 + tm->tm_year);
	outStr += (tm->tm_mon >= 9) 
            ? std::to_string(tm->tm_mon + 1)
            : ("0" + std::to_string(tm->tm_mon + 1));
    outStr += (tm->tm_mday > 9) 
            ? std::to_string(tm->tm_mday)
            : ("0" + std::to_string(tm->tm_mday));
    outStr += (tm->tm_hour > 9) 
            ? ("_" + std::to_string(tm->tm_hour))
            : ("_0" + std::to_string(tm->tm_hour));
    outStr += (tm->tm_min > 9) 
            ? std::to_string(tm->tm_min)
            : "0" + std::to_string(tm->tm_min);
    outStr += (tm->tm_sec > 9) 
            ? std::to_string(tm->tm_sec)
            : "0" + std::to_string(tm->tm_sec);
    std::cout << outStr;
	return ;
}

Account::Account(int amnt)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	(this->_nbAccounts)++;
	this->_totalAmount += amnt;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = amnt;

	std::cout << "[";
    _displayTimestamp();
    std::cout << "] index:" << (this->_accountIndex - 1) <<
		            ";amount:" << this->_amount << 
                    ";created" <<
    std::endl;
}

Account::~Account(void)
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << (this->_accountIndex - 1) <<
		            ";amount:" << this->_amount << 
                    ";closed" <<
    std::endl;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] accounts:" << _nbAccounts <<
                    ";total:" << _totalAmount <<
                    ";deposits:" << _totalNbDeposits <<
                    ";withdrawals:" << _totalNbWithdrawals <<
    std::endl;
}

void		Account::displayStatus(void) const
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << (this->_accountIndex - 1) <<
                    ";amount:" << this->_amount << 
                    ";deposits:" << this->_nbDeposits <<
                    ";withdrawals:" << this->_nbWithdrawals << 
    std::endl;
}


void		Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	(this->_nbDeposits)++;
	this->_totalAmount += deposit;
	(this->_totalNbDeposits)++;

	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << (this->_accountIndex - 1) <<
                    ";p_amount:" << (this->_amount - deposit) << 
		            ";deposit:" << deposit << 
                    ";amount:" << this->_amount << 
                    ";nb_deposits:" << this->_nbDeposits << 
    std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		std::cout << "[";
		_displayTimestamp();
		std::cout << "] index:" << (this->_accountIndex - 1) << 
			            ";p_amount:" << this->_amount << 
                        ";withdrawal:" << 
                        "refused" << 
        std::endl;
		return (false);
	}
	else
	{
		this->_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		(this->_nbWithdrawals)++;
		(this->_totalNbWithdrawals)++;
        
		std::cout << "[";
		_displayTimestamp();
		std::cout << "] index:" << (this->_accountIndex - 1) << 
			            ";p_amount:" << (this->_amount + withdrawal) << 
                        ";withdrawal:" << withdrawal <<
                        ";amount:" << this->_amount << 
                        ";nb_withdrawals:" << this->_nbWithdrawals <<
        std::endl;
		return (true);
	}
}
