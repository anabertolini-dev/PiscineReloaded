/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:55:04 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:58:40 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function ft_range which returns an array ofints. T
	his int array should contain all values between min and max.
	
	Min included - max excluded.
	Here’s how it should be prototyped:
	int *ft_range(int min, int max);
	
	If min´value is greater or equal to max’s value, a null pointer
	should be returned.
*/

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * (sizeof(int)));
	if (range == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
