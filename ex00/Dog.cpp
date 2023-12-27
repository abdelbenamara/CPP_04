/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 16:42:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";

	return;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;

	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;

	return;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << " makes a woof sound" << std::endl;
}
