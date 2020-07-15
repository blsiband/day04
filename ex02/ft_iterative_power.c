/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:20:50 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/15 10:02:45 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_iterative_power(int nb, int power);
{
	if(power == 0)
		return 1;
	else 
		return nb * power(nb, power -1);
}

	
