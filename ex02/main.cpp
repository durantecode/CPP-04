/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:19:56 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/12 19:48:47 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 10

int main(void)
{
	{
		Animal *dog = new Dog;
		dog->makeSound();

		// Animal *cat = new Animal;

		// cat->makeSound();
	}
	return (0);
}