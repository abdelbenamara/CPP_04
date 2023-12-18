/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:33:51 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:34:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongCat *wrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();

	delete i;
	delete j;

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); // will output the wrong cat sound!
	wrongMeta->makeSound();

	delete wrongI;
	delete wrongMeta;

	// delete new AAnimal(); // this will not compile

	return 0;
}
