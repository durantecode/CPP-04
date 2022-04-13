/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:32:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 17:20:41 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : m_name("")
{
	for (int i = 0; i < m_inventory_size; i++)
		m_inventory[i] = nullptr;
}

Character::Character(std::string const &name) : m_name(name)
{
	for (int i = 0; i < m_inventory_size; i++)
		m_inventory[i] = nullptr;
}

Character::Character(Character const &toCopy)
{
	for (int i = 0; i < m_inventory_size; i++)
		this->m_inventory[i] = nullptr;
	*this = toCopy;
}

Character &Character::operator = (Character const &toCopy)
{
	this->m_name = toCopy.getName();
	for (int i = 0; i < m_inventory_size; i++)
	{
		if (this->m_inventory[i])
		{
			delete this->m_inventory[i];
			this->m_inventory[i] = nullptr;
			this->m_inventory[i] = toCopy.m_inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->m_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	bool equipped = false;

	for (int i = 0; i < m_inventory_size; i++)
	{
		if (m_inventory[i] == nullptr)
		{
			m_inventory[i] = m;
			equipped = true;
			std::cout << "Materia " << m->getType() << " equipped in inventory " << i << std::endl;
			return ;
		}
	}
	if (equipped == false)
		std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->m_inventory[idx])
		{
			std::cout << "Materia " << m_inventory[idx]->getType() << " unequipped in inventory " << idx << std::endl;
			this->m_inventory[idx] = nullptr;
		}
		else
			std::cout << "Inventory " << idx << " is already empty" << std::endl;
	}
	else
		std::cout << "Wrong index to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->m_inventory[idx])
			this->m_inventory[idx]->use(target);
		else
		std::cout << "There's no materia equipped in inventory " << idx << std::endl;
	}
	else
		std::cout << "I can only use 4 equipped materias" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < m_inventory_size; i++)
		delete m_inventory[i];
}
