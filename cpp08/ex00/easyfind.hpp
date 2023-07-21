/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:50:32 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 15:21:02 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(T &array, int n)
{
	typename T::iterator it = std::find(array.begin(), array.end(), n);
	if (it != array.end())
		return (*it);
	throw std::out_of_range("Not found");
}

#endif