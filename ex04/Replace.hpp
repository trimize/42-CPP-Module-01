/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:34:25 by trimize           #+#    #+#             */
/*   Updated: 2024/05/20 15:47:41 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
	private:
		std::string filename;
	public:
		Replace(std::string filename);
		~Replace();
		void	replace(std::string s1, std::string s2);
};

#endif