/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:19:58 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/06/28 17:04:10 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook book;

	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Enter command: ";
		
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			std::cout << "Exiting PhoneBook" << std::endl;
			break ;
		}
		else if (cmd == "ADD")
		{
			std::cout << "--Adding new contact--" << std::endl;
			book.add_contact(new_contact());
			std::cout << "--New contact added sucessfully--" << std::endl;
		}
		else if (cmd == "SEARCH")
			book.display();
		else
			continue ;
	}
}
