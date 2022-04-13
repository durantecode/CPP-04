/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:12:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 17:34:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		static const int	m_maxMateria = 4;
		AMateria			*m_materias[m_maxMateria];
		int					m_materiasLearned;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &toCopy);
		~MateriaSource(void);
		MateriaSource &operator = (MateriaSource const &toCopy);

		virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif
