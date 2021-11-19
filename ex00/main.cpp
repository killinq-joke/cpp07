/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:52:39 by mout              #+#    #+#             */
/*   Updated: 2021/11/19 17:03:54 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
void swap(T *x, T *y)
{
    T tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
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

int main(void)
{
    int a = 10, b = 20;
    std::cout << max(a, b) << std::endl;
    std::cout << max('f', 'a') << std::endl;
    std::cout << min(a, b) << std::endl;
    std::cout << min('f', 'a') << std::endl;
    std::cout << "a == " << a << " b == " << b << std::endl;
    swap(&a, &b);
    std::cout << "a == " << a << " b == " << b << std::endl;
    std::cout << min(a, b) << std::endl;
    return (0);
}