/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.HPP                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:22:04 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/20 23:21:33 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


class BitcoinExchange
{
	private:
		std::vector<std::string>		_input;
		std::vector<float>				_exchange_rate;
	public:
		BitcoinExchange(std::string file_name);
		~BitcoinExchange(void);

		void							parseBitcoin(void);
		
		void 							dataXinput(const std::vector<std::string> data);
		const std::vector<std::string>		&getInput(void);
};

#endif