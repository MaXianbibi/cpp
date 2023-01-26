/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:26:44 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/24 07:09:26 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cstdio>
#include <iomanip>

struct information {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class phonebook {
    public:
			information a[8];

        phonebook() : index(0){		
        }
        ~phonebook() {
		}

		void add(information tmp) {
			a[index] = tmp;
			index++;
			if (index > 7)
				index = 0;
		}

	private:
		int index;
};