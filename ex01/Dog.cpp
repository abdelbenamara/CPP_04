/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:26:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(0)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;

	return;
}

Dog::Dog(Dog const &src) : Animal(src), brain(0)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;

	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;

	return;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);

	if (this != &rhs)
	{
		delete brain;
		brain = new Brain(*(rhs.brain));
	}

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << " makes a woof sound" << std::endl;
}
