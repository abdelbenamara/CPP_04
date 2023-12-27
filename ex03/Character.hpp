/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:36:16 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 22:48:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(std::string const &name);
	Character(Character const &src);
	virtual ~Character(void);

	Character &operator=(Character const &rhs);

	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

private:
	Character(void);

	std::string name;
	AMateria *inventory[4];
};

#endif
