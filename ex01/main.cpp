/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:10:07 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/09 19:27:55 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	{
		int arr[] = {0, 1, 2, 3, 4};
		std::cout << "Before: " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl;
		iter(arr, 5, (increment<int>));	
		std::cout << "After: " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl;
	}
	{
		char arr[] = {'a', 'b', 'c', 'd', 'e'};
		std::cout << "Before: " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl;
		iter(arr, 5, (increment<char>));	
		std::cout << "After: " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl;
	}
}