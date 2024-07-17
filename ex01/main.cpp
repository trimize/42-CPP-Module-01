/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:14:53 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 13:28:37 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zb;
	Zombie *zombies;
	int	i;

	i = 5;
	zb.set_name("Mom");
	zb.announce();
	zombies = zombieHorde(i, "Steve");
	i--;
	while (i >= 0)
		zombies[i--].announce();
	delete [] zombies;
	return (0);
}