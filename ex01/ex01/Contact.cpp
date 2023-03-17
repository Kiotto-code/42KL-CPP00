/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 00:43:13 by yichan            #+#    #+#             */
/*   Updated: 2023/03/17 01:33:15 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{	
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

void	Contact::setFname(std::string str)
{
	this->first_name = str;
}

void	Contact::setLname(std::string str)
{
	this->last_name = str;
}

void	Contact::seNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhnum(std::string str)
{
	this->phone_number = str;
}

void	Contact::setDarkSecret(std::string str)
{
	this->darkest_seret = str;
}