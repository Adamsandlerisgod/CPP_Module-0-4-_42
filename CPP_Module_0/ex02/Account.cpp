/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:16:09 by whendrik          #+#    #+#             */
/*   Updated: 2023/11/29 17:46:04 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

using namespace std;

int	Account:: _nbAccounts = 0,
	Account:: _totalAmount = 0,
	Account:: _totalNbDeposits = 0,
	Account:: _totalNbWithdrawals = 0;

void	Account:: _displayTimestamp()
{
	struct tm	*time_data;
	time_t		rawtime;
	char		str[40];
	
	time(&rawtime);
	time_data = localtime(&rawtime);
	strftime(str, 80,"[%Y%m%d_%H%M%S]", time_data);
	cout << str << " "; 	
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
	cout << "index:" << BRED << _accountIndex << RESET << ";";
	cout << "amount:" << BRED << _amount << RESET << ";";
	cout << "created" << endl;
}

Account::~Account()
{
	_displayTimestamp();
	cout << "index:" << BRED << _accountIndex << RESET << ";";
	cout << "amount:" << BRED << _amount << RESET << ";";
	cout << "closed" << endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	cout << "accounts:" << BRED << _nbAccounts << RESET << ";";
	cout << "total:" << BRED << _totalAmount << RESET << ";";
	cout << "deposits:" << BRED << _totalNbDeposits << RESET << ";";
	cout << "withdrawals:" << BRED << _totalNbWithdrawals << RESET << endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	cout << "index:" << BRED << _accountIndex << RESET << ";";
	cout << "amount:" << BRED << _amount << RESET << ";";
	cout << "deposits:" << BRED << _nbDeposits << RESET << ";";
	cout << "withdrawals:" << BRED << _nbWithdrawals << RESET << endl;
	
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << BRED << _accountIndex << RESET << ";";
	cout << "p_amount:" << BRED << _amount << RESET << ";";
	cout << "deposit:" << BRED << deposit << RESET << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << "amount:" << BRED << _amount << RESET << ";";
	cout << "nb_deposits:" << BRED << _nbDeposits << RESET << endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << BRED << _accountIndex << RESET << ";";
	cout << "p_amount:" << BRED << _amount << RESET << ";";
	if (withdrawal > _amount)
	{
		cout << "withdrawal:refused" << endl;
		return (false);
	}
	cout << "withdrawal:" << BRED << withdrawal << RESET << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	cout << "amount:" << BRED << _amount << RESET << ";";
	cout << "nb_withdrawals:" << BRED << _nbWithdrawals << RESET << endl;
	return (true);
}

int	Account::getNbAccounts() {return _nbAccounts;}
int	Account::getTotalAmount() {return _totalAmount;}
int	Account::getNbDeposits() {return _totalNbDeposits;}
int	Account::getNbWithdrawals() {return _totalNbWithdrawals;}
int Account::checkAmount() const {return _amount;}

