/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:38:16 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/23 19:29:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__

#include <iostream>
#include <string>

class AAnimal
{
public:
	AAnimal(void);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal(void);

	AAnimal &operator=(AAnimal const &rhs);

	std::string const &getType(void) const;
	virtual void makeSound(void) const = 0;

protected:
	std::string type;
};

#endif
