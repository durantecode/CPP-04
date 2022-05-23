/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:00:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 16:15:03 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : m_type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	*this = toCopy;
}

Animal &Animal::operator = (Animal const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

const std::string &Animal::getType(void) const
{
	return (this->m_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animals can make sound..." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
