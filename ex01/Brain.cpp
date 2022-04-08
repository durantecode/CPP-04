/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:52:16 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:50:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	*this = toCopy;
}

Brain &Brain::operator = (Brain const &toCopy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.getIdea(i);
	return *this;
}

const std::string &Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
