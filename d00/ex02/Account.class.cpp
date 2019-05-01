/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:35:41 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/30 21:44:21 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(void) { };

Account::Account(int amnt)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	(this->_nbAccounts)++;
	this->_totalAmount += amnt;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = amnt;

    _displayTimestamp();
    std::cout << "index:" << (this->_accountIndex - 1) <<
                ";amount:" << this->_amount << 
                ";created" <<
    std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
                ";amount:" << this->_amount << 
                ";closed" <<
    std::endl;
}

void	Account::_displayTimestamp( void )
{
	static time_t		t;
	static struct tm	*now;

	if (!now)
	{
		t = time(0);
		now = localtime(&t);
	}

	std::cout << 
            '[' <<
            now->tm_year + 1900 <<
            std::setw(2) <<  std::setfill('0') << now->tm_mon << 
            std::setw(2) <<  std::setfill('0') << now->tm_mday << 
            '_' << 
            std::setw(2) << std::setfill('0') << now->tm_hour << 
            std::setw(2) << std::setfill('0') << now->tm_min << 
            std::setw(2) << std::setfill('0') << now->tm_sec << 
            "] ";
    return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<
                ";total:" << _totalAmount <<
                ";deposits:" << _totalNbDeposits <<
                ";withdrawals:" << _totalNbWithdrawals <<
    std::endl;
}

void		Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
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

	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
                ";p_amount:" << (this->_amount - deposit) << 
                ";deposit:" << deposit << 
                ";amount:" << this->_amount << 
                ";nb_deposits:" << this->_nbDeposits << 
    std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << (this->_accountIndex - 1) << 
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
        
		std::cout << "index:" << (this->_accountIndex - 1) << 
                    ";p_amount:" << (this->_amount + withdrawal) << 
                    ";withdrawal:" << withdrawal <<
                    ";amount:" << this->_amount << 
                    ";nb_withdrawals:" << this->_nbWithdrawals <<
        std::endl;
		return (true);
	}
}
