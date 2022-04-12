/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:52:31 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:50:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(Brain const &toCopy);
		~Brain(void);
		Brain &operator = (Brain const &toCopy);

		const std::string &getIdea(int i) const;
		void setIdea(std::string idea, int i);
};

#endif
