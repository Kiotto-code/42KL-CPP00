#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

Account::Account(int initial_deposit) {
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts
	<< ";amount:" << initial_deposit
	<< ":created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts
	<< ";amount:" << checkAmount()
	<< ":created" << std::endl;
}
void	Account::_displayTimestamp(void)
{

}

// function implementations
void	Account::makeDeposit( int deposit );
{
	if
}
bool	Account::makeWithdrawal( int withdrawal );
int		Account::checkAmount( void ) const;
void	Account::displayStatus( void ) const;



int		Account::getNbAccounts( void )
{
		return _nbAccounts;
}
int		Account::getTotalAmount( void );
{
	return _totalAmount;
}

int		Account::getNbDeposits( void );
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void );
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void );