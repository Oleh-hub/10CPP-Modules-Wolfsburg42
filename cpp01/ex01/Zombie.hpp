/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:29:57 by oruban            #+#    #+#             */
/*   Updated: 2024/09/12 17:08:25 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define NUM 5			// Number of zombies in the zombie horde
# define NAME "Vasia" // Name of the zombies in the zombie horde

class Zombie {
private:
	std::string name;
public:
	// Setters
	Zombie();						 // Default constructor
	// Zombie(std::string public_name); //Parametric constructor
	~Zombie();
	void announce(void);
	void setName(std::string public__name);
};

Zombie *zombieHorde( int N, std::string public_name );

#endif // Zombie_HPP
