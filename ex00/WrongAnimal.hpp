/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:10 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 14:23:25 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

/* As the function makeSound is not declared as virtual,
when called from a derived class it executes from the base class */

class WrongAnimal
{
	protected:
		std::string m_type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &toCopy);
		~WrongAnimal(void);
		WrongAnimal &operator = (WrongAnimal const &toCopy);

		const std::string &getType(void) const;
		void makeSound(void) const;
};

#endif
