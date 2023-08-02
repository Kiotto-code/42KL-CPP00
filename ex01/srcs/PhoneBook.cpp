/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:25:18 by yichan            #+#    #+#             */
/*   Updated: 2023/06/03 17:13:20 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_index(0), m_record_num(0) {}

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
	m_index += 1;
	if (m_index < 8)
		m_record_num += 1;
}

static void	truncate(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str.substr(0,10);
	std::cout << "|";
}

void	PhoneBook::Search()
{
	int it;

	if(m_record_num == 0)
	{
		std::cout << "There is no contact in PhonBook" << std::endl;
		return;
	}
	else
	{
		std::cout << "|  index    " << "|first name" << "|last name " << "| nickname |\n";
		std::cout << "|-----------" << "|----------" << "|----------" << "|----------|\n";
		for (it = 0; it < m_record_num ; it ++)
		{
			std::cout << "| " << std::setw(10) << it+1 << "|";
			truncate( m_Contact[it].getFname());
			truncate( m_Contact[it].getLname());
			truncate( m_Contact[it].getNickname());
			// if (m_Contact[it].getFname().length() > 10)
			// 	std::cout << m_Contact[it].getFname().substr(0,9) << ".";
			// else
			// 	std::cout << std::setw(10) << m_Contact[it].getFname();
			// std::cout << "|";
			// if (m_Contact[it].getLname().length() > 10)
			// 	std::cout << m_Contact[it].getLname().substr(0,9) << ".";
			// else
			// 	std::cout << std::setw(10) << m_Contact[it].getLname();
			// std::cout << "|";
			// if (m_Contact[it].getNickname().length() > 10)
			// 	std::cout << m_Contact[it].getNickname().substr(0,9) << ".";
			// else
			// 	std::cout << std::setw(10) << m_Contact[it].getNickname();
			std::cout << "\n";
		}
		std::cout << "---------------------------END----------------------------" << std::endl;
		while (1)
		{
			std::cout << "Enter the index of the contact: ";
			std::string num;
			// std::string::size_type non_num;
			if (!std::getline(std::cin, num)) // ctr+D
				exit(EXIT_FAILURE);
			if (!isdigit(num[0]))
			{
				std::cout << "Something Wrong With you\n";
				continue;
			}
			it = std::stoi(num) -1;
			if (it < 0 || it > (m_record_num-1))
				std::cout << "ERROR: Number wot within index range recorded\n" << "Enter index from 1 - " << m_record_num << std::endl;
			else
				break;
		}
		std::cout	<< "The first name: "		<< m_Contact[it].getFname() << "\n"
					<< "The last name: "		<< m_Contact[it].getLname() << "\n"
					<< "The nick name: "		<< m_Contact[it].getNickname() << "\n"
					<< "The phone num: "		<< m_Contact[it].getPhnum() << "\n"
					<< "The darkest secret: "	<< m_Contact[it].getDarkSecret()
					<< std::endl;
	}
}

void	PhoneBook::Command()
{
	std::string command;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: " ;
		if (!std::getline(std::cin, command))
			exit(EXIT_FAILURE);
		if (command == "ADD" || command == "a")
			Add();
		if (command == "SEARCH" || command == "s")
			Search();
		if (command == "EXIT" || command == "e")
			return ;
	}
}