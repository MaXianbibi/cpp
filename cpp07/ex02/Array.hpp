/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:24:33 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 14:41:56 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T *array;
	unsigned int size;
public:
	Array() { array = new T[0]; };
	~Array() { delete[] array; };
	Array(unsigned int n)
	{
		size = n;
		array = new T[n];
		for (size_t i = 0; i < n; i++)
		{
			array[i] = T();
		}
	};

	Array(Array const &src)
	{
		array = nullptr;
		*this = src;
	};

	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			if (array)
				delete[] array;

			size = rhs.size;
			array = new T[size];
			for (size_t i = 0; i < size; i++)
			{
				array[i] = rhs.array[i];
			}
		}
		return *this;
	};

	T &operator[](unsigned int index)
    {
        if (index >= size) throw std::out_of_range("Index out of range");
        return array[index];
    }

	unsigned int const &getSize() const { return size; };
};

#endif