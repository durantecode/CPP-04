/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:02:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 13:43:42 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->m_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &toCopy)
{
	*this = toCopy;
}

Dog &Dog::operator = (Dog const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog goes guau guau guauuuu" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}