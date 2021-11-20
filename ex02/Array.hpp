/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:27:07 by mout              #+#    #+#             */
/*   Updated: 2021/11/20 13:18:03 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{

public:
    Array(void) { this->_arr = NULL; this->_n = 0; };
    Array(unsigned int n) { this->_arr = new T[n]; this->_n = n; };
    Array(Array const & a1) { *this = a1; };
	Array operator=(Array const & a1)
	{
		if (this->_arr) delete [] this->_arr; this->_arr = new T[a1.size()];
		for (unsigned int i = 0; i < a1.size(); i++)
		{
			this->_arr[i] = a1[i];
		}
		return (*this);
	};
    ~Array(void) { if (this->_arr) delete [] this->_arr; };
	T	& operator[](unsigned int i)
	{ 
			if (i >= this->size())
				throw OutOfLimits();
			return this->_arr[i];
	};

	const T	& operator[](unsigned int i) const
	{ 
		if (i >= this->size())
			throw OutOfLimits();
		return this->_arr[i];
	};

	unsigned int size(void) const
	{
		return _n;
	};

	class OutOfLimits : public std::exception
	{
		const char *what() const throw()
		{
			return ("Index out of limits");
		}
	};

private:
    T				*_arr;
	unsigned int	_n;

};

#endif