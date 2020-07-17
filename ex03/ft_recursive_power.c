/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:04:19 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/17 12:48:52 by blsiband         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>

int  ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
		else if	(power < 1)
			return (1);
	else
		return (nb *ft_recursive_power(nb, power - 1));

}


