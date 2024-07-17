/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:14:53 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 12:34:36 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zb("Philippe");
	Zombie *zb2 = newZombie("Eric");

	zb2->announce();
	randomChump("googoogahgah");
	zb.announce();
	delete zb2;
	return (0);
}