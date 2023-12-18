/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 19:52:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;

	return;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;

	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;

	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << " makes a meow sound" << std::endl;
}