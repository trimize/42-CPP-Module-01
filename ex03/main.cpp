/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:14:53 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 14:15:15 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon wp("Sword");
	HumanA to("TO", wp);
	to.attack();
	HumanB naier("NAIER");
	naier.attack();
	naier.setWeapon(wp);
	naier.attack();
}