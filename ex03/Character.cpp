/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:32:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 00:15:14 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : m_name("")
{
	for (int i = 0; i < m_inventory_size; i++)
		m_inventory[i] = nullptr;
}

Character::Character(std::string name) : m_name(name)
{
	for (int i = 0; i < m_inventory_size; i++)
		m_inventory[i] = nullptr;
}

Character::Character(Character const &toCopy)
{
	*this = toCopy;
}

Character &Character::operator = (Character const &toCopy)
{
	return *this;
}

std::string const &Character::getName() const
{
	return (this->m_name);
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{

}

Character::~Character(void)
{

}
