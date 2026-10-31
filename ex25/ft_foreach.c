/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:56:02 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/30 18:59:35 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create the function ft_foreach which, for a given ints array, applies 
	a function on all elements of the array. This function will be applied
	following the array’s order.
	
	Here’s how it should be prototyped:
	void ft_foreach(int *tab, int length, void (*f)(int))
	
	For example, the function ft_foreach could be called as follows 
	in order to display all ints of the array:
	ft_foreach(tab, 1337, &ft_putnbr);
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
