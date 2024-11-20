#include "ClapTrap.hpp"
# define HITPOINTS 100
# define ENERGYPOINTS 50
# define ATTACKDAMAGE 20
// fancy colors:
# define RESET 		"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"

// The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
ClapTrap::ClapTrap() : _name("Vasia_default"), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDAMAGE)
{
	std::cout << GRAY "ClapTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN "ClapTrap " RED  << _name << GREEN " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << YELLOW "ClapTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}
// Copy constructor and assignment operator
ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name; // what is the sense to get another var with the _name already existing!? roi 181124
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << BLUE "Copy constructor for " RED << _name << BLUE " " << this << " is called " RESET << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "Operator assignment for "<< _name << this << " is called " << std::endl;
	}
	return *this;
}
// public member functions
void ClapTrap::attack(const std::string& target)
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy or dead!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int repare_amount = 0;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	if(_hitPoints < HITPOINTS)
	{
		_hitPoints += amount;
		if (_hitPoints > HITPOINTS)
		{
			repare_amount = amount - (_hitPoints - HITPOINTS);
			_hitPoints = HITPOINTS;
		}
		else
			repare_amount = amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << repare_amount << " points!" << std::endl;
	}
}
// Getters
std::string ClapTrap::getName()
{
	return _name;
}
unsigned int ClapTrap::getHitPoints()
{
	return _hitPoints;
}
unsigned int ClapTrap::getEnergyPoints()
{
	return _energyPoints;
}
unsigned int ClapTrap::getAttackDamage()
{
	return _attackDamage;
}