/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 00:43:13 by yichan            #+#    #+#             */
/*   Updated: 2023/03/20 03:08:40 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{	
}

std::string Contact::inputData(const char *prompt)
{
	std::string value;

	while(value.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
			exit(EXIT_FAILURE);
		// else if (!std::getline(std::cin, value))
		else if (value.find_first_not_of(" \t\v\r\n") == value.npos)
			value.clear()
	}
	return value;
}

std::string	Contact::getFname(void) const
{
	return (this->first_name);
}

std::string	Contact::getLname(void) const
{
	return (this->last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string	Contact::getPhnum(void) const
{
	return (this->phone_number);
}

std::string	Contact::getDarkSecret(void) const
{
	return (this->darkest_seret);
}

void	Contact::setFname(void)
{
	this->first_name = inputData("Enter a First Name: ");
}

void	Contact::setLname(void)
{
	this->last_name = inputData("Enter a Last Name: ");
}

void	Contact::setNickname(void)
{
	this->nickname = inputData("Enter a Nickname: ");
}

void	Contact::setPhnum(void)
{
	this->phone_number = inputData("Enter a Phone Number: ");
}

void	Contact::setDarkSecret(void)
{
	this->darkest_seret = inputData("Enter a darkest secret: ");
}