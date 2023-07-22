/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:10:25 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 17:16:17 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv)
{
	for (size_t i = 1; argv[i]; i++)
	{
		int value = std::stoi(argv[i]);
		if (value < 0)
		{
			throw "Error";
			return ;	
		}
		_deque.push_back(value);
		_list.push_back(value);
	}
}

PmergeMe::~PmergeMe()
{
}

const std::deque<int>	&PmergeMe::getDeque() const
{
	return (_deque);
}

const std::list<int>	&PmergeMe::getList() const
{
	return (_list);
}

void PmergeMe::sort(void (PmergeMe::*func)())
{
	static int i = 0;
    timeval t1, t2;
    long elapsed_microsec;
    gettimeofday(&t1, NULL);
	(this->*func)();
    gettimeofday(&t2, NULL);
    elapsed_microsec = ((t2.tv_sec - t1.tv_sec) * 1000000.0) + (t2.tv_usec - t1.tv_usec);
    std::cout << "Time to process a range of " << _deque.size() << " elements with " << (i ? "std::list : " : "std::deque : ") << elapsed_microsec << " us." << std::endl;
	i++;
}

// DEQUE
std::deque<int> dequeMerge(std::deque<int> list)
{
	if (list.size() <= 1)
		return list;
	
			
	std::deque<int>		left(list.begin(), list.begin() + list.size() / 2);
	std::deque<int>		right(list.begin() + list.size() / 2, list.end());

	left = dequeMerge(left);
	right = dequeMerge(right);
	std::deque<int>		result;
	while (left.size() > 0 && right.size() > 0)
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.pop_front();
		}
		else
		{
			result.push_back(right.front());
			right.pop_front();
		}
	}
	while (left.size() > 0)
	{
		result.push_back(left.front());
		left.pop_front();
	}
	while (right.size() > 0)
	{
		result.push_back(right.front());
		right.pop_front();
	}

	return (result);	
}

void PmergeMe::sortDeque(void)
{
	_deque = dequeMerge(_deque);
	
	std::cout << "After: ";

	for(size_t i = 0; i < _deque.size(); i++)
	{
		if (i == 5)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << _deque.at(i) << " ";
	}
	std::cout << std::endl;
}

// LIST

std::list<int> listMerge(std::list<int> list)
{
	if (list.size() <= 1)
		return list;
	
	std::list<int>::iterator middle = list.begin();
	std::advance(middle, list.size() / 2);

	std::list<int>	left(list.begin(), middle);
	std::list<int>	right(middle, list.end());
	

	left = listMerge(left);
	right = listMerge(right);

	std::list<int>	result;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.pop_front();
		}
		else
		{
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty())
	{
		result.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty())
	{
		result.push_back(right.front());
		right.pop_front();
	}

	return result;
}

void PmergeMe::sortList(void)
{
	listMerge(_list);
}