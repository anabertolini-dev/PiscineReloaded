/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:15:36 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:17:03 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function that swaps the value of two integers whose addresses 
	are entered as parameters.
	
	Here’s how it should be prototyped :
	void ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
