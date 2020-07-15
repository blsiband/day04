/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:04:19 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/15 10:49:47 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main()
{
	int nb, a, result;
	printf("Enter base number:");
	scanf("%d", &nb);
	printf("Enter power number(positive integer):");
	scanf("%d", &a);
	result = power(nb , a);
	printf("%d^%d = %d", nb , a, result);
	return 0;

	}

int ft_recursive_power(int nb, int a) {
	if (a !=0)
		return (nb * power(nb, a - 1));
	else
		return 1;
}
