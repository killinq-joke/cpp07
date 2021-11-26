/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:52:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/26 14:26:49 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>int_arr(21);
	Array<float>f_arr(21);
	int i = 0;
	while ((unsigned int)i < 22)
	{
		try
		{
			int_arr[i] = i;
			std::cout << "int: " << int_arr[i] << std::endl;
		}
		catch (Array<int>::OutOfLimits & ex)
		{
			std::cout << ex.what() << std::endl;
		}
		i++;
	}
	i = 0;
	while ((unsigned int)i < 22)
	{
		try
		{
			f_arr[i] = i + 0.1;
			std::cout << "float: " << f_arr[i] << std::endl;
		}
		catch (Array<float>::OutOfLimits & ex)
		{
			std::cout << ex.what() << std::endl;
		}
		i++;
	}
}