/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:28:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:31:22 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	 Create a function that returns the square root of a number
	 (if it exists), or 0 if the square root is an irrational number.
	
	Here’s how it should be prototyped :
	int ft_sqrt(int nb);
	
	Your function must return its result in less than two seconds.
*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
