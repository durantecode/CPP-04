/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:36:01 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/13 17:24:21 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main() 
{
	std::cout << "1. Create new MateriaSource and learn materias (check maximum too):" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
	std::cout << std::endl;
	
	std::cout << "2. Create 2 new characters and test deep copy:" << std::endl;
		Character *dur = new Character("dur");
		ICharacter *dur2 = new Character(*dur);
		delete dur;
		dur = nullptr; // to avoid dangling pointer
		// delete dur2; // must delete, if copy is shallow it will return error.
	std::cout << std::endl;

	std::cout << "3. Create materias and equip them (also check unknown materias):" << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		dur2->equip(tmp);
		tmp = src->createMateria("cure");
		dur2->equip(tmp);
		tmp = src->createMateria("hi");
		dur2->equip(tmp);
	std::cout << std::endl;

	std::cout << "4. Check maximum equipped too:" << std::endl;
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;
		dur2->equip(cure);
		dur2->equip(ice);
		dur2->equip(ice);
		dur2->unequip(2);
		dur2->unequip(2);
		dur2->unequip(6);
	std::cout << std::endl;

	std::cout << "5. Use materias on new chacarter:" << std::endl;
		ICharacter* bob = new Character("bob");
		dur2->use(0, *bob);
		dur2->use(1, *bob);
		dur2->use(2, *bob);
		dur2->use(6, *bob);
		dur2->use(3, *bob);
		dur2->use(-4, *bob);
	std::cout << std::endl;

	delete bob;
	delete dur2;
	delete src;

	return (0); 
}