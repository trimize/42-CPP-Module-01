/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:17:34 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 15:03:00 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl Steve;

	if (argc <= 1 || argc > 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	Steve.complain(argv[1]);
	return (0);
}
