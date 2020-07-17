/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:11:22 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/17 12:44:37 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{ 
	if (nb < 0)
		return (0);
	if(nb == 0 || nb == 1)
		return (1);

		return nb * ft_recursive_factorial(nb - 1);
}

