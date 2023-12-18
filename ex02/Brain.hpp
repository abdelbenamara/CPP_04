/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:33:25 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 19:38:25 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{
public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);

private:
	std::string ideas[100];
};

#endif
