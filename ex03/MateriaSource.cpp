/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:15:30 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/12 23:31:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{

}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	*this = toCopy;
}

MateriaSource &MateriaSource::operator = (MateriaSource const &toCopy)
{
	return *this;
}

void IMateriaSource::learnMateria(AMateria*)
{

}

AMateria* IMateriaSource::createMateria(std::string const &type)
{
	
}

MateriaSource::~MateriaSource(void)
{

}
