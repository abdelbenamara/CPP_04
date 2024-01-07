/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:14 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:39:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "\033[1;31m";
	std::cout << "Cat default constructor called";
	std::cout << "\033[0m" << std::endl;
	this->type = "Cat";

	return;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "\033[1;31m";
	std::cout << "Cat copy constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Cat::~Cat(void)
{
	std::cout << "\033[1;31m";
	std::cout << "Cat destructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "\033[1;31m";
	std::cout << this->type << " makes a meow sound";
	std::cout << "\033[0m" << std::endl;
}
