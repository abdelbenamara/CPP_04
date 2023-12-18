/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:33:51 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:05:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const Dog *j2 = new Dog();
	const Cat *i2 = new Cat();
	const Animal *array[10] = {0};

	delete i;
	delete j;

	for (int n = 0; n < 5; ++n)
		array[n] = new Dog(*j2);

	for (int n = 5; n < 10; ++n)
		array[n] = new Cat(*i2);

	for (int n = 0; n < 10; ++n)
		delete array[n];

	delete i2;
	delete j2;

	// const WrongCat *wrongI = new WrongCat();
	// const WrongAnimal *wrongI2 = new WrongCat(*wrongI);
	// const WrongCat *wrongI3 = new WrongCat(*wrongI);
	// delete wrongI3; // this will delete wrongI3.brain and wrongI.brain
	// delete wrongI2; // this will not delete wrongI2.brain
	// delete wrongI; // this will double delete wrongI.brain and wrongI3.brain

	return 0;
}
