/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:54:35 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/16 10:57:31 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(void) {
	int nb;
	printf("Enter a number and must return in less than two seconds");
	scanf("%d!", &nb);
	printf("The number %d! = %d \n", nb, ft_iterative_factorial(nb));
	
} 

int  ft_iterative_factorial(int nb) {
	int i = 5;
	int product = 1;
	while( i=nb, i--) {

		product = product * i;
	}

	return product;
}
