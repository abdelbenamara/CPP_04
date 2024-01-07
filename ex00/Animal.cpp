/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:40:11 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:37:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "\033[0;33m";
	std::cout << "Animal default constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Animal::Animal(Animal const &src) : type(src.type)
{
	std::cout << "\033[0;33m";
	std::cout << "Animal copy constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Animal::~Animal(void)
{
	std::cout << "\033[0;33m";
	std::cout << "Animal destructor called";
	std::cout << "\033[0m" << std::endl;

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
	std::cout << "\033[0;33m";
	std::cout << this->type << " makes no sound";
	std::cout << "\033[0m" << std::endl;
}
