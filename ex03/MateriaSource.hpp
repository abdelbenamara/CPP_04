/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:02:06 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/27 21:20:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource(void);

	MateriaSource &operator=(MateriaSource const &rhs);

	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);

private:
	AMateria *templates[4];
};

#endif
