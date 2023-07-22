/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:10:08 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 16:38:00 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <string>
#include <list>
#include <sys/time.h>


class PmergeMe
{
private:
	std::deque<int>			_deque;
	std::list<int>			_list;
public:
	PmergeMe(char **argv);
	~PmergeMe();

	const std::deque<int>	&getDeque() const;
	const std::list<int>	&getList() const;
	void					sortDeque(void);
	void					sortList(void);
	void 					sort(void (PmergeMe::*func)());
};





#endif