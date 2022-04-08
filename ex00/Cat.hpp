/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:01:37 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 02:01:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

class Cat
{
	private:

	public:
		Cat(void);
		Cat(Cat const &toCopy);
		~Cat(void);
		Cat &operator=(Cat const &toCopy);
};

//std::ostream    &operator<<(std::ostream &out, Cat const &toCopy);

#endif
