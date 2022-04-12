#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure(void);
		Cure(Cure const &toCopy);
		~Cure(void);
		Cure &operator = (Cure const &toCopy);

		AMateria *clone() const;
};

#endif
