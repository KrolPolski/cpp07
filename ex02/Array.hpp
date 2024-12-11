/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:32:00 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/11 15:03:16 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include <stdexcept>
template <typename T>
class Array
{
private:
	unsigned int _size;
	std::unique_ptr<T[]> _values;
public:
	Array();
	Array(unsigned int size);
	Array(const Array& other);
	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;
	~Array();
};

template<typename T>
Array<T>::Array() : _size(0), _values(nullptr)
{
}

template<typename T>
Array<T>::Array(unsigned int size) : _size(size), _values(std::make_unique<T[]>(size))
{
}

template<typename T>
Array<T>::Array(const Array& other) : _size(other.size()), _values(std::make_unique<T[]>(other.size()))
{
	for (unsigned int i = 0; i < other.size(); i++)
	{
		(*this)[i] = other._values[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	_size = other.size();
	_values = (std::make_unique<T[]>(other.size()));
	for (unsigned int i = 0; i < other.size(); i++)
	{
		(*this)[i] = other._values[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= size())
		throw std::out_of_range("Invalid index");
	return _values[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= size())
		throw std::out_of_range("Invalid index");
	return _values[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template<typename T>
Array<T>::~Array()
{
}
