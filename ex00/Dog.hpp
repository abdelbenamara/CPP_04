/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:11:50 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 19:49:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog(void);

	Dog &operator=(Dog const &rhs);

	virtual void makeSound(void) const;
};

#endif
