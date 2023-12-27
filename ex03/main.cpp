/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:30:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 23:09:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	MateriaSource *foo;
	ICharacter *me = new Character("me");
	ICharacter *bob = new Character("bob");
	Character *bar;
	AMateria *tmp1;
	AMateria *tmp2;

	// Cannot create the materia yet

	tmp1 = src->createMateria("ice");

	if (tmp1 != NULL)
		return 1;

	// Cannot create the materia at all

	tmp1 = src->createMateria("notamateria");

	if (tmp1 != NULL)
		return 1;

	// Normal learn, create, use

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	me->use(0, *bob);
	me->use(1, *bob);

	// Invalid indexes (out of range or unfilled)

	me->use(-1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	// Normal unequip

	me->unequip(0);
	me->unequip(1);

	// Fill MateriaSource templates and try to learn more than max size of 4

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(tmp1);
	src->learnMateria(tmp2);

	delete tmp2;
	delete tmp1;

	// Invalid indexes (out of range or unfilled)

	me->unequip(-1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);

	// Fill Character inventory and try to equip more than max size of 4

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	// MateriaSource deep copy

	foo = new MateriaSource(*dynamic_cast<MateriaSource *>(src));

	delete foo->createMateria("ice");
	delete foo->createMateria("cure");

	// Character deep copy

	bar = new Character(*dynamic_cast<Character *>(me));

	bar->use(0, *bob);
	bar->use(1, *bob);
	bar->use(2, *bob);
	bar->use(3, *bob);

	delete tmp2;
	delete tmp1;
	delete bar;
	delete bob;
	delete me;
	delete foo;
	delete src;

	return 0;
}
