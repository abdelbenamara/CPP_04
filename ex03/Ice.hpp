/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:31:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 19:45:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &src);
	virtual ~Ice(void);

	Ice &operator=(Ice const &rhs);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
