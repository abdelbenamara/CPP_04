/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:33:12 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/23 19:43:20 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(), brain(0)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	this->brain = new Brain();

	return;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src), brain(0)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->brain = src.brain;

	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	delete brain;

	return;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	WrongAnimal::operator=(rhs);

	if (this != &rhs)
		this->brain = rhs.brain;

	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << " makes a wrong meow sound" << std::endl;
}