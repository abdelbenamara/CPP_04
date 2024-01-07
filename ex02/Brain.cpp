/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:35:39 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:50:33 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\033[0;36m";
	std::cout << "Brain default constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << "\033[0;36m";
	std::cout << "Brain copy constructor called";
	std::cout << "\033[0m" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = src.ideas[i];

	return;
}

Brain::~Brain(void)
{
	std::cout << "\033[0;36m";
	std::cout << "Brain destructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = rhs.ideas[i];
	}

	return *this;
}
