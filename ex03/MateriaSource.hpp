/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:12:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 00:12:08 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &toCopy);
		~MateriaSource(void);
		MateriaSource &operator = (MateriaSource const &toCopy);
};

#endif
