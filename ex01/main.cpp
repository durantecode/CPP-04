/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:19:56 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/08 16:59:42 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 10

int main(void)
{
	// const Animal *lotsOfAnimals[N_ANIMALS];
	const Animal *dog = new Dog();

	dog->makeSound();
	Brain *brain = dog->getBrain();
	brain->setIdea("Quiero nuggets", 0);
	brain->setIdea("Kill me now!", 1);
	brain->setIdea("Hello!", 2);

	Brain *brain2(brain);
	std::cout << brain2->getIdea(0) << std::endl;
	// for (int i = 0; i < N_ANIMALS; i++)
	// {
	// 	if (i < N_ANIMALS / 2)
	// 		lotsOfAnimals[i] = new Dog();
	// 	else
	// 		lotsOfAnimals[i] = new Cat();
	// }
	// std::cout << lotsOfAnimals[0]->getType() << std::endl;
	// std::cout << lotsOfAnimals[5]->getType() << std::endl;

	// Brain *brain;
	// brain = lotsOfAnimals[0]->getBrain();
	// brain->setIdea("I want sarshisitas!", 0);
	// brain->setIdea("Let's play bal!!", 1);
	// brain->setIdea("Feed me human!", 2);
	// std::cout << lotsOfAnimals[5]->getType() << std::endl;
	// delete dog;//should not create a leak
    // delete cat;

	return (0);
}