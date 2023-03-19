/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 01:21:39 by yichan            #+#    #+#             */
/*   Updated: 2023/03/20 01:05:12 by yichan           ###   ########.fr       */
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
		int		m_record_num;
		int		m_index;
		Contact m_Contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	Command();
		void	Add();
		void	Search();
	
};

#endif