/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:41:06 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 22:00:28 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("")
{
	return;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	return;
}

AMateria::AMateria(AMateria const &src) : type(src.type)
{
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;

	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* use a materia on ";
	std::cout << target.getName();
	std::cout << " *" << std::endl;

	return;
}
