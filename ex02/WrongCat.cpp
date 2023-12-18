/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:33:12 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:26:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	this->brain = new Brain();
	std::cout << "WrongCat default constructor called" << std::endl;

	return;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;

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
		brain = rhs.brain;

	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << " makes a wrong meow sound" << std::endl;
}
