/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:03:01 by oruban            #+#    #+#             */
/*   Updated: 2024/08/30 10:48:16 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* horde = zombieHorde(N, NAME);

	delete[] horde;
	return 0;
}