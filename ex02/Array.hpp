/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:27:07 by mout              #+#    #+#             */
/*   Updated: 2021/11/19 17:41:45 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{

public:
    Array(void);
    Array(unsigned int n);
    ~Array(void);

private:
    T           *_content;
    Array<T>    *_next;

};

Array::Array(void)
{
    
}

Array::Array(unsigned int n)
{
}

Array::~Array()
{
}


#endif