/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:35:39 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 19:47:13 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;

	return;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;

	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;

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
