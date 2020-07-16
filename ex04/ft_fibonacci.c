/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:52:14 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/16 15:19:42 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index <0)
		return(-1);
	if(index == 0)
		return(0);
	if (index == 1)
		return(1);
	if(index > 46)
		return(0);
	
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}




