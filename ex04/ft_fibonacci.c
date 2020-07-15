/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:52:14 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/15 12:45:29 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int ft_fibonacci(int index)
{
	if (index <0)
		return(-1);
	if (index <=2)
		return(index);
	
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}



int  main()
{
	int ft_fibonacci(int index);

	return(-1);
	
}
