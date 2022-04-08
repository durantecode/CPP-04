/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:10 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 02:01:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	private:

	public:
		Animal(void);
		Animal(Animal const &toCopy);
		~Animal(void);
		Animal &operator=(Animal const &toCopy);
};

//std::ostream    &operator<<(std::ostream &out, Animal const &toCopy);

#endif
