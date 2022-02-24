/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:11:09 by obounri           #+#    #+#             */
/*   Updated: 2022/02/24 20:51:14 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

void    Account::_displayTimestamp( void ) {
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    std::cout << "[" << 1900 + local_time->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << 1 + local_time->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mday;
    std::cout << "_" << std::setw(2) << std::setfill('0') << local_time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_sec << "]";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _nbAccounts += 1;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void    Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" \
         << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus() const {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount  << ";deposits:" \
         << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount  << ";deposit:" \
         << deposit;
    _amount += deposit;
    _nbDeposits += 1;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount  << ";withdrawal:";
    if (withdrawal > _amount) {
        std::cout << " refused:" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += 1;
    return (true);
}