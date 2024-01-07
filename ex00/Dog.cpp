/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:33 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:40:59 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "\033[1;32m";
	std::cout << "Dog default constructor called";
	std::cout << "\033[0m" << std::endl;
	this->type = "Dog";

	return;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "\033[1;32m";
	std::cout << "Dog copy constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Dog::~Dog(void)
{
	std::cout << "\033[1;32m";
	std::cout << "Dog destructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "\033[1;32m";
	std::cout << this->type << " makes a woof sound";
	std::cout << "\033[0m" << std::endl;
}
