
#include "ClapTrap.hpp"

/* int main()
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	ClapTrap a;
	ClapTrap b("Vasya");
	// ClapTrap b = a;
} */

#include "ScavTrap.hpp"

int main() 
{
	ClapTrap cla4p_tp;
	ClapTrap bob("Bob");
	ClapTrap dave("Dave");
	ClapTrap olh(bob);	// copy constructor used 1811

	std::cout << "Имя cla4p_tp: " << cla4p_tp.getName() << std::endl;
	std::cout << "Имя bob: " << bob.getName() << std::endl;
	std::cout << "Имя dave: " << dave.getName() << std::endl;
	std::cout << "Имя olh: " << olh.getName() << std::endl << std::endl;
	{
		for (int i = 0; i < 5; i++)
			cla4p_tp.attack("Barrel");
		for (int i = 0; i < 3; i++)
		{
			cla4p_tp.attack("Bob");
			bob.takeDamage(cla4p_tp.getAttackDamage());
		}
	}
	{
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " points!" << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			if (bob.getHitPoints() < HITPOINTS)
				bob.beRepaired(20);
			else
				break;
		}
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " points!" << std::endl;
		bob.attack("the air");
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
			bob.takeDamage(10);
//=====================ScvaTrap zone=======================
		ScavTrap zopa;
		std::cout << "zopa has name '" << zopa.getName() << "'." << std::endl;
		std::cout << "zopa has " << zopa.getHitPoints() << " hit points." << std::endl;
		std::cout << "zopa has " << zopa.getEnergyPoints() << " energy points." << std::endl;
		std::cout << "zopa may cause " << zopa.getAttackDamage() << " attack demage." << std::endl;
		// std::cout << zopa._name << std::endl;

	}
	std::cout << std::endl;
}
