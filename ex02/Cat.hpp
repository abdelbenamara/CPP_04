/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:20:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 21:12:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(Cat const &src);
	virtual ~Cat(void);

	Cat &operator=(Cat const &rhs);

	virtual void makeSound(void) const;

private:
	Brain *brain;
};

#endif
