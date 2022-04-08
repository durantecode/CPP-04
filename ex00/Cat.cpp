/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:31 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 02:01:32 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{

}

Cat::Cat(Cat const &toCopy)
{
	*this = toCopy;
}

Cat::~Cat(void)
{

}

Cat &Cat::operator=(Cat const &toCopy)
{
	return *this;
}

/*std::ostream &operator<<(std::ostream &out, Cat const &toCopy)
{
	return out;
}*/
