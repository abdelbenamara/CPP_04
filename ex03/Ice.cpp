/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:49:01 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 19:56:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	return;
}

Ice::~Ice(void)
{
	return;
}

Ice &Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);

	return *this;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *" << std::endl;

	return;
}
