/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:54:35 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/17 12:44:58 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int  ft_iterative_factorial(int nb) 
{
	int i;
	int product;

	if(nb < 0 || nb > 12)
		return 0;

	i = 2;
	product = 1;
	while( i <=nb)
	{
		product *= i;
		++i;
	}

	return product;
}
