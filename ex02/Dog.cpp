/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/23 19:45:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), brain(0)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();

	return;
}

Dog::Dog(Dog const &src) : AAnimal(src), brain(0)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*(src.brain));

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
	AAnimal::operator=(rhs);

	if (this != &rhs)
	{
		delete this->brain;
		this->brain = new Brain(*(rhs.brain));
	}

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << " makes a woof sound" << std::endl;
}
