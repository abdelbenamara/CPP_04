/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:40:11 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/07 13:55:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("")
{
	std::cout << "\033[0;33m";
	std::cout << "AAnimal default constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

AAnimal::AAnimal(AAnimal const &src) : type(src.type)
{
	std::cout << "\033[0;33m";
	std::cout << "AAnimal copy constructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "\033[0;33m";
	std::cout << "AAnimal destructor called";
	std::cout << "\033[0m" << std::endl;

	return;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;

	return *this;
}

std::string const &AAnimal::getType(void) const
{
	return this->type;
}
