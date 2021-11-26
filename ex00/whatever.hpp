/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:58:36 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/26 14:26:10 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

template <typename T>
T min(T x, T y)
{
    if (x < y)
        return x;
    else
        return y;
}

#endif