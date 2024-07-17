/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:37:12 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 13:22:19 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombies = new Zombie[N];

	i = 0;
	while (i < N)
		zombies[i++].set_name(name);
	return (zombies);
}