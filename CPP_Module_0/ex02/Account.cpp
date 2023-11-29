/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:16:09 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 20:54:24 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"


int	Account:: _nbAccounts = 0,
	Account:: _totalAmount = 0,
	Account:: _totalNbDeposits = 0,
	Account:: _totalNbWithdrawals = 0;

void	Account:: _displayTimestamp()
{
	struct tm	*timeData;
	time_t		rawTime;
	char		str[40];
	
	time(&rawTime);
	timeData = localtime(&rawTime);
	strftime(str, 80,"[%Y%m%d_%H%M%S]", timeData);
	std::cout << str << " "; 	
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << BRED << _accountIndex << RESET << ";";
	std::cout << "amount:" << BRED << _amount << RESET << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << BRED << _accountIndex << RESET << ";";
	std::cout << "amount:" << BRED << _amount << RESET << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << BRED << _nbAccounts << RESET << ";";
	std::cout << "total:" << BRED << _totalAmount << RESET << ";";
	std::cout << "deposits:" << BRED << _totalNbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BRED << _totalNbWithdrawals << RESET << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << BRED << _accountIndex << RESET << ";";
	std::cout << "amount:" << BRED << _amount << RESET << ";";
	std::cout << "deposits:" << BRED << _nbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BRED << _nbWithdrawals << RESET << std::endl;
	
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << BRED << _accountIndex << RESET << ";";
	std::cout << "p_amount:" << BRED << _amount << RESET << ";";
	std::cout << "deposit:" << BRED << deposit << RESET << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << BRED << _amount << RESET << ";";
	std::cout << "nb_deposits:" << BRED << _nbDeposits << RESET << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << BRED << _accountIndex << RESET << ";";
	std::cout << "p_amount:" << BRED << _amount << RESET << ";";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << BRED << withdrawal << RESET << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "amount:" << BRED << _amount << RESET << ";";
	std::cout << "nb_withdrawals:" << BRED << _nbWithdrawals << RESET << std::endl;
	return (true);
}

int	Account::getNbAccounts() {return _nbAccounts;}
int	Account::getTotalAmount() {return _totalAmount;}
int	Account::getNbDeposits() {return _totalNbDeposits;}
int	Account::getNbWithdrawals() {return _totalNbWithdrawals;}
int Account::checkAmount() const {return _amount;}

