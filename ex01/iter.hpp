/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:06:34 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/09 19:21:30 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename F>
void	iter(T *ptr, unsigned int num, F function)
{
	if (!ptr || num == 0 || !function)
	{
		std::cerr << "Invalid arguments for iter" << std::endl;
		return ;
	}
	unsigned int i = 0;
	try 
	{
		while (i < num)
		{
			function(ptr[i]);
			i++;
		}	
		
	}
	catch (const std::exception &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
}

template <typename T>
void	increment(T &ref)
{
	ref++;
}