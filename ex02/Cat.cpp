/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:14 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:58:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), brain(0)
{
	std::cout << "\033[1;31m";
	std::cout << "Cat default constructor called";
	std::cout << "\033[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();

	return;
}

Cat::Cat(Cat const &src) : AAnimal(src), brain(0)
{
	std::cout << "\033[1;31m";
	std::cout << "Cat copy constructor called";
	std::cout << "\033[0m" << std::endl;
	this->brain = new Brain(*(src.brain));

	return;
}

Cat::~Cat(void)
{
	std::cout << "\033[1;31m";
	std::cout << "Cat destructor called";
	std::cout << "\033[0m" << std::endl;
	delete brain;

	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	AAnimal::operator=(rhs);

	if (this != &rhs)
	{
		delete this->brain;
		this->brain = new Brain(*(rhs.brain));
	}

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "\033[1;31m";
	std::cout << this->type << " makes a meow sound";
	std::cout << "\033[0m" << std::endl;
}
