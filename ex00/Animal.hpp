/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:10 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 16:15:06 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/* Virtual keyword means when called, it will check if the method
exists in any of de derivative classes and execute it */

/* Pure virtual method will never execute the method in base class
but will make sure the derivative classes have it.
This will also make the class Abstract. A class is considered
Abstract if it has at least 1 pure virtual function */

class Animal
{
	protected:
		std::string m_type;

	public:
		Animal(void);
		Animal(Animal const &toCopy);
		virtual ~Animal(void);
		Animal &operator = (Animal const &toCopy);

		const std::string &getType(void) const;
		virtual void makeSound(void) const;
};

#endif

