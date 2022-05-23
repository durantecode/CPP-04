/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:31 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 17:38:13 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->m_type = "Cat";
	this->m_brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->m_type = toCopy.getType();
	this->m_brain = new Brain;
	*(this->m_brain) = *(toCopy.getBrain());
}

Cat &Cat::operator = (Cat const &toCopy)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	this->m_type = toCopy.getType();
	*(this->m_brain) = *(toCopy.getBrain());
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat goes miau miau miauuuuu" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->m_brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->m_brain;
}
