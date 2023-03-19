/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:25:18 by yichan            #+#    #+#             */
/*   Updated: 2023/03/20 03:08:23 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::Add()
{
	if (m_index > 7)
		m_index = 0;
	m_Contact[m_index].setFname();
	m_Contact[m_index].setLname();
	m_Contact[m_index].setNickname();
	m_Contact[m_index].setPhnum();
	m_Contact[m_index].setDarkSecret();
}

void	PhoneBook::Search()
{
	int it;

	if(m_record_num == 0)
	{
		std::cout << "There is no contact in PhonBook" << std::endl;
		return;
	}
	else()
	{
		std::cout << "|  index   " << "|first name" << "|last name " << "| nickname \n";
		std::cout << "|----------" << "|----------" << "|----------" << "-----------\n";
		for (it = 0; it < m_record_num ; it ++)
		{
			std::cout << "|" << std::setw(10) << it << it+1 << "|";
			if (m_Contact[it].getFname().length() > 10)
				std::cout << m_Contact[it].getFname().substr(0,8) << ".";
		}
	}
}

// void	PhoneBook:: Search()

void	PhoneBook::Command()
{
	std::string command;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: " ;
		if (!std::getline(std::cin, command, "EXIT"))
			exit(EXIT_FAILURE);
		if (command = "ADD")
			Add();
		if (command = "SEARCH")
			Search();
		if (command = "EXIT")
			return ;
	}
}