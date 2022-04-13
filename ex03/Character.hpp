/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:11:54 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 16:41:08 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		static const int	m_inventory_size = 4;
		std::string			m_name;
		AMateria			*m_inventory[m_inventory_size];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &toCopy);
		virtual ~Character(void);
		Character &operator = (Character const &toCopy);
	
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
