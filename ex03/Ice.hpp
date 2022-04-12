#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(Ice const &toCopy);
		~Ice(void);
		Ice &operator = (Ice const &toCopy);

		AMateria *clone() const;
};

#endif
