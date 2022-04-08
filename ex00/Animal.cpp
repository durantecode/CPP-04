/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:00:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 02:01:02 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{

}

Animal::Animal(Animal const &toCopy)
{
	*this = toCopy;
}

Animal::~Animal(void)
{

}

Animal &Animal::operator=(Animal const &toCopy)
{
	return *this;
}

/*std::ostream &operator<<(std::ostream &out, Animal const &toCopy)
{
	return out;
}*/
