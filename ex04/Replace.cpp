/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:35:18 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:16:59 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename)
{
	this->filename = filename;
}

Replace::~Replace()
{
}

void	Replace::replace(std::string s1, std::string s2)
{
	std::ifstream	infile(this->filename.c_str());
	std::ofstream	outfile((this->filename + ".replace").c_str());
	std::string	str;
	size_t	i;
	if (infile.is_open())
	{
		if (std::getline(infile, str, '\0'))
		{
			i = str.find(s1);
			while (i != std::string::npos)
			{
				str.erase(i, s1.length());
				str.insert(i, s2);
				i = str.find(s1);
			}
			outfile << str;
		}
		else
			std::cout << "Empty file" << std::endl;
	}
	else
		std::cout << "Error opening " << filename + ".replace" << std::endl;
	infile.close();
	outfile.close();
}
