/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:05:00 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:38:14 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* m_brain;

	public:
		Dog(void);
		Dog(Dog const &toCopy);
		~Dog(void);
		Dog &operator = (Dog const &toCopy);
		
		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
};

#endif
