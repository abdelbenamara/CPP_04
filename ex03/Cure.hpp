/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:33:18 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 19:45:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &src);
	virtual ~Cure(void);

	Cure &operator=(Cure const &rhs);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
