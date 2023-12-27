/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:40:11 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/23 19:33:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;

	return;
}

Animal::Animal(Animal const &src) : type(src.type)
{
	std::cout << "Animal copy constructor called" << std::endl;

	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;

	return;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;

	return *this;
}

std::string const &Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << this->type << " makes no sound" << std::endl;
}
