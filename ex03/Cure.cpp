/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:56:08 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 22:09:50 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure &Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);

	return *this;
}

AMateria *Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals ";
	std::cout << target.getName();
	std::cout << "'s wounds *" << std::endl;

	return;
}
