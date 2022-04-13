/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:04:47 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 17:10:28 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(std::string const &type) : m_type(type)
{
	
}

AMateria::AMateria(AMateria const &toCopy)
{
	*this = toCopy;
}

AMateria &AMateria::operator = (AMateria const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

const std::string &AMateria::getType() const
{
	return (this->m_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use????" << target.getName() << std::endl;
}
