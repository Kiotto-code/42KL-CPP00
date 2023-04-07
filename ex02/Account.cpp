#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

Account::Account(int initial_deposit) :	_accountIndex(0),
										_amount(0),
										_nbDeposits(0),
										_nbWithdrawals(0) 
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts
	<< ";amount:" << initial_deposit
	<< ":created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts
				<< ";amount:" << _amount
				<< ":created" << std::endl;
}

void	Account::_displayTimestamp(void)
{

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
{}
int		Account::checkAmount( void ) const
{}
void	Account::displayStatus( void ) const
{}

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
 
}