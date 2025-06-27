/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:59:25 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/06/27 21:53:44 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// void capitalize(string msg)
// {
// 	replace();
// }

int main(void)
{
	std::string msg;
	
	std::getline(std::cin, msg);
	if (msg.length() == 0)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
		std::cout << "Hello world!" << std::endl;
	return (0);
}
