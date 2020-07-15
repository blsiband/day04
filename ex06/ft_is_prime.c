/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:59:17 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/15 15:28:12 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_is_prime(int nb);
{
	int i;

	i=2;
	if(nb <= 0)
		return(0);
	while (i <= (nb / 2))
	{
		if(!(nb % i))
			return(0);
		else
			i += 1;
	}
	return(1);
}

int main() {
   int 	ft_is_prime(int nb);

	return(1);
}
