/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/23 19:38:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(0)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();

	return;
}

Cat::Cat(Cat const &src) : Animal(src), brain(0)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*(src.brain));

	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;

	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);

	if (this != &rhs)
	{
		delete this->brain;
		this->brain = new Brain(*(rhs.brain));
	}

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << " makes a meow sound" << std::endl;
}
