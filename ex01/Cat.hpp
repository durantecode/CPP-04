/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:37 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:38:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* m_brain;

	public:
		Cat(void);
		Cat(Cat const &toCopy);
		virtual ~Cat(void);
		Cat &operator = (Cat const &toCopy);

		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
};

#endif
