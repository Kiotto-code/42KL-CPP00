/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:46:51 by yichan            #+#    #+#             */
/*   Updated: 2023/03/17 03:07:13 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  first name, last name, nickname, phone number, and
// darkest secret.
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_seret;

	public:
		Contact(void);
		~Contact(void);
		std::string getFname();
		std::string getLname();
		std::string getNickname();
		std::string getPhnum();
		std::string getDarkSecret();
		void	setFname();
		void	setLname();
		void	seNickname();
		void	setPhnum();
		void	setDarkSecret();
		
};

#endif