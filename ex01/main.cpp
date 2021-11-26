/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:52:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/26 14:26:25 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstrn(char *str)
{
    for (int i = 0; str[i]; i++)
        ft_putchar(str[i]);
    ft_putchar('\n');
}

int main(int ac, char **av) {
    iter(av[0], strlen(av[0]), ft_putchar);
    ft_putchar('\n');
    if (ac > 1)
    {
        iter(av + 1, ac - 1, ft_putstrn);
    }
    return (0);
}