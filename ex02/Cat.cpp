/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:27:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), brain(0)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;

	return;
}

Cat::Cat(Cat const &src) : AAnimal(src), brain(0)
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;

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
	AAnimal::operator=(rhs);

	if (this != &rhs)
	{
		delete brain;
		brain = new Brain(*(rhs.brain));
	}

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << " makes a meow sound" << std::endl;
}
