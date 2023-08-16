#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

void	Account::_displayTimestamp(void)
{
	std::time_t	t = std::time(NULL); //Returns the current calendar time
	std::tm		tm = *std::localtime(&t); //Converts given time since epoch as std::time_t value into calendar time, expressed in local time.

	// time_t		mk = std::mktime(&tm);

	// std::cout << "The result value of mktime: " << mk << std::endl;
	// std::cout << "The result value of mktime: " << tm << std::endl;

	std::cout << '['
			  << std::setfill('0')
			  << std::setw(4) << tm.tm_year +1900 // years since 1900
			  << std::setw(2) << tm.tm_mon + 1 // month since January [0-11]
			  << std::setw(2) << tm.tm_mday
			  << '_'
			  << std::setw(2) << tm.tm_hour
			  << std::setw(2) << tm.tm_min
			  << std::setw(2) << tm.tm_sec
			  << "] ";
}

Account::Account(int initial_deposit) :	_accountIndex(_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0) 
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

// function implementations

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				 << "p_amount:" << _amount - deposit << ";"
				 << "deposit:" << deposit << ";"
				 << "amount:" << _amount << ";"
				 << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_amount -= withdrawal;
	if (checkAmount())
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		Account::_displayTimestamp();
		std::cout	<< "index:" << _accountIndex << ";"
					 << "p_amount:" << _amount + withdrawal << ";"
					 << "withdrawal:" << withdrawal << ";"
					 << "amount:" << _amount << ";"
					 << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_amount += withdrawal;
		Account::_displayTimestamp();
		std::cout	<< "index:" << _accountIndex << ";"
					 << "p_amount:" << _amount<< ";"
					 << "withdrawal:" << "refused" << std::endl;
		return false;
	}
}
int		Account::checkAmount( void ) const
{
	if (this->_amount >= 0)
		return 1;
	else
		return 0;
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				 << "amount:" << _amount << ";"
				 << "deposits:" << _nbDeposits << ";"
				 << "withdrawals:" << _nbWithdrawals << std::endl;
}

int		Account::getNbAccounts( void )
{
		return _nbAccounts;
}
int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}