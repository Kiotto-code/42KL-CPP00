/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 01:21:39 by yichan            #+#    #+#             */
/*   Updated: 2023/03/21 00:28:36 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		m_index;
		int		m_record_num;
		Contact m_Contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	Command();
		void	Add();
		void	Search();
	
};

#endif