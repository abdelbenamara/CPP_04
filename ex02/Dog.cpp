/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:33 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:58:54 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), brain(0)
{
	std::cout << "\033[1;32m";
	std::cout << "Dog default constructor called";
	std::cout << "\033[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();

	return;
}

Dog::Dog(Dog const &src) : AAnimal(src), brain(0)
{
	std::cout << "\033[1;32m";
	std::cout << "Dog copy constructor called";
	std::cout << "\033[0m" << std::endl;
	this->brain = new Brain(*(src.brain));

	return;
}

Dog::~Dog(void)
{
	std::cout << "\033[1;32m";
	std::cout << "Dog destructor called";
	std::cout << "\033[0m" << std::endl;
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
	std::cout << "\033[1;32m";
	std::cout << this->type << " makes a woof sound";
	std::cout << "\033[0m" << std::endl;
}
