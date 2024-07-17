/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:53:40 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:16:18 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wp = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &new_wp)
{
	this->wp = &new_wp;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";
	if (!this->wp)
		std::cout << "fists" << std::endl;
	else
		std::cout << this->wp->get_type() << std::endl;
}

