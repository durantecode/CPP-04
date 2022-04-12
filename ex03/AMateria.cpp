/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:04:47 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/12 21:13:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(AMateria const &toCopy)
{
	*this = toCopy;
}

AMateria &AMateria::operator = (AMateria const &toCopy)
{
	return *this;
}

const std::string &AMateria::getType() const
{
	return (this->m_type);
}

AMateria::~AMateria(void)
{

}
