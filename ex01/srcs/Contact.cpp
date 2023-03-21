/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 00:43:13 by yichan            #+#    #+#             */
/*   Updated: 2023/03/21 22:44:13 by yichan           ###   ########.fr       */
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
			value.clear();
	}
	// while (value.find("\t") != std::string::npos)
	// 	value = value.replace(value.find("\t"), std::strlen("\t"), "    ");
	for (size_t i = 0; i < value.size(); i++) {
		if (value[i] == '\t')
			value.replace(i, std::strlen("\t"), "    ");
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
	// std::string	str = inputData("Enter a First Name: ");
	// while (str.find("\t") != std::string::npos)
	// 	str = str.replace(str.find("\t"), std::strlen("\t"), " ");
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