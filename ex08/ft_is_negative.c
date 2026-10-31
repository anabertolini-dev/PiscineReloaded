/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:12:47 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:13:52 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function that displays ’N’ or ’P’ depending on the 
	integer’s sign entered as a parameter. If n is negative, display ’N’. 
	If n is positive or null, display ’P’.
	
	Here’s how it should be prototyped :
	void ft_is_negative(int n);
*/

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
