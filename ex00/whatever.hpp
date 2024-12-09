/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:47:18 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/09 18:48:11 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
	return ;
}

template <typename T>
T max(T a, T b)
{
	return (a > b ? a : b);
}

template <typename T>
T min(T a, T b)
{
	return (a < b ? a : b);
}