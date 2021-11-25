/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:10:44 by mout              #+#    #+#             */
/*   Updated: 2021/11/25 13:47:27 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string.h>
# include <unistd.h>

template <typename T>
void    iter(T *arr, size_t length, void (*f)(T const &))
{
    for (size_t i = 0; i < length; i++)
    {
        f(arr[i]);
    }
}

template <typename T>
void    iter(T *arr, size_t length, void (*f)(T))
{
    for (size_t i = 0; i < length; i++)
    {
        f(arr[i]);
    }
}


#endif