/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:20:50 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/17 15:26:54 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int  ft_iterative_power(int nb, int power)
{ 
	int i;
	int nbr;

	i=1;
	nbr=nb;
	if(power == 0)
		return (1);
	if(power < 0)
		return(0);
	while(i < power)
	{
		nb = nb * nbr
	}
	return(nb);
}


	
