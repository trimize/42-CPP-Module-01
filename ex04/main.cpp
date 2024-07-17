/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:17:34 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 15:49:34 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return(std::cout << "Wrong number of arguments\n", 1);
	Replace 	rp(argv[1]);
	rp.replace(argv[2], argv[3]);
	return (0);
}
