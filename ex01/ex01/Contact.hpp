/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:46:51 by yichan            #+#    #+#             */
/*   Updated: 2023/03/20 00:24:19 by yichan           ###   ########.fr       */
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
		std::string Contact::inputData(const char *prompt);
		std::string	showData();
		std::string getFname() const;
		std::string getLname() const;
		std::string getNickname() const;
		std::string getPhnum() const;
		std::string getDarkSecret() const;
		void	setFname(void);
		void	setLname(void);
		void	setNickname(void);
		void	setPhnum(void);
		void	setDarkSecret(void);
		
};

#endif