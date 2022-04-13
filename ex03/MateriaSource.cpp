/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:15:30 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 17:34:32 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : m_materiasLearned(0)
{
	for (int i = 0; i < m_maxMateria; i++)
		m_materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	*this = toCopy;
}

MateriaSource &MateriaSource::operator = (MateriaSource const &toCopy)
{
	for (int i = 0; i < m_maxMateria; i++)
	{
		if (this->m_materias[i])
			delete this->m_materias[i];
		this->m_materias[i] = toCopy.m_materias[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mToLearn)
{
	if (m_materiasLearned == 4)
	{
		std::cout << "Can't learn more materias!" << std::endl;
		return ;
	}
	for (int i = 0; i < m_maxMateria; i++)
	{
		if (this->m_materias[i] == nullptr)
		{
			this->m_materias[i] = mToLearn;
			m_materiasLearned++;
			std::cout << "Materia " << mToLearn->getType() << " learned!" << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < m_maxMateria; i++)
	{
		if (this->m_materias[i] && this->m_materias[i]->getType() == type)
			return (this->m_materias[i]->clone());
	}
	return (NULL);	
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < m_maxMateria; i++)
	{
		if (this->m_materias[i])
			delete this->m_materias[i];
	}
}
