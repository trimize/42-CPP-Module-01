/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:05:25 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 13:24:21 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);
		Zombie*	zombieHorde(int N, std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif