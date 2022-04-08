/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:31 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 13:43:50 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->m_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	*this = toCopy;
}

Cat &Cat::operator = (Cat const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat goes miau miau miauuuuu" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}