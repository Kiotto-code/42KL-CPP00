/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:50:49 by yichan            #+#    #+#             */
/*   Updated: 2023/03/14 23:24:54 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <cctype>

// int main() {
//     char c = 'a';
//     char uppercase_c = std::toupper(c);
//     std::cout << "Original character: " << c << std::endl;
//     std::cout << "Uppercase character: " << uppercase_c << std::endl;
//     return 0;
// }

#include <iostream>

int main(int ac, char **av)
{
    if (ac ==1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while(--ac)
    {
        ++av;
		for (size_t i = 0; i < strlen(*av); i++)
			(*av)[i] = std::toupper((*av)[i]);
		std::cout << *av << " ";
    }
    std::cout << std::endl ;
    return(0);
}