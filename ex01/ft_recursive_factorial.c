/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:11:22 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/14 12:17:55 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int fn(int a)
{ 
	if (a<=3)
	{
		a +=1;
		write(1, &a, 1);
		fn(a);

		return (0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	fn (0);
	return (0);
}