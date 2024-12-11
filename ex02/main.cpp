/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:31:10 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/11 15:03:39 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> arr(5);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << std::endl;
	
	Array<int> arr2(arr);
	arr2[0]++;
	std::cout << "arr[0]: " << arr[0] << " arr2[0]: " << arr2[0] << std::endl;
	try
	{
		arr[5] = 6;
	}
	catch (std::out_of_range& e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
}