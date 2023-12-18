/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:40:11 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:11:39 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("")
{
	std::cout << "AAnimal default constructor called" << std::endl;

	return;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;

	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;

	return;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;

	return *this;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}
