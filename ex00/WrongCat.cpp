/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:14:24 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 14:14:48 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->m_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	*this = toCopy;
}

WrongCat &WrongCat::operator = (WrongCat const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat goes miau miau miauuuuu" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}