/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:14:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 23:02:34 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		this->templates[i] = NULL;

	return;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; ++i)
	{
		if (src.templates[i])
			this->templates[i] = src.templates[i]->clone();
		else
			this->templates[i] = NULL;
	}

	return;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->templates[i])
			delete this->templates[i];
	}

	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (this->templates[i])
				delete this->templates[i];

			if (rhs.templates[i])
				this->templates[i] = rhs.templates[i]->clone();
			else
				this->templates[i] = NULL;
		}
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->templates[i])
		{
			this->templates[i] = m;

			return;
		}
	}

	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->templates[i] && this->templates[i]->getType() == type)
			return this->templates[i]->clone();
	}

	return NULL;
}
