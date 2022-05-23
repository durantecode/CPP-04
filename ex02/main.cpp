/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:19:56 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 17:41:53 by ldurante         ###   ########.fr       */
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

		/* This will result in error because having at least one pure virtual
		function makes the class abstract */

		// const Animal* animal = new Animal();
		// animal->makeSound();
	}
	return (0);
}
