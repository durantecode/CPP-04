/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:00:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 16:15:25 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : m_type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
	*this = toCopy;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->m_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals can make sound..." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
