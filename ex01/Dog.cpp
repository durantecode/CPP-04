/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:02:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:41:37 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->m_type = "Dog";
	this->m_brain = new Brain();
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

Brain *Dog::getBrain(void) const
{
	return (this->m_brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->m_brain;
}