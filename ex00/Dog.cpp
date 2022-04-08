/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:02:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 02:05:11 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{

}

Dog::Dog(Dog const &toCopy)
{
	*this = toCopy;
}

Dog::~Dog(void)
{

}

Dog &Dog::operator=(Dog const &toCopy)
{
	return *this;
}

/*std::ostream &operator<<(std::ostream &out, Dog const &toCopy)
{
	return out;
}*/
