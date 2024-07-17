/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:10:01 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:15:29 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " headshoted !" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": "
	<< "BraiiiiiiinnnzzzZ..." << std::endl;
}
