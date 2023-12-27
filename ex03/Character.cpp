/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:10:54 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 22:53:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("")
{
	for (int i = 0; i < 4; ++i)
		this->inventory[i] = NULL;

	return;
}

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; ++i)
		this->inventory[i] = NULL;

	return;
}

Character::Character(Character const &src) : name(src.name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (src.inventory[i])
			this->inventory[i] = (src.inventory[i])->clone();
		else
			this->inventory[i] = NULL;
	}

	return;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}

	return;
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;

		for (int i = 0; i < 4; ++i)
		{
			if (this->inventory[i])
				delete this->inventory[i];

			if (rhs.inventory[i])
				this->inventory[i] = (rhs.inventory[i])->clone();
			else
				this->inventory[i] = NULL;
		}
	}

	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;

			return;
		}
	}

	return;
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
		this->inventory[idx] = NULL;

	return;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);

	return;
}
