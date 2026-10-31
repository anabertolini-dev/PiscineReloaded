/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:20:08 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:23:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create an iterated function that returns a number. This number is 
	the result of a factorial operation based on the number 
	given as a parameter.
	
	If there’s an error, the function should return 0.
	Here’s how it should be prototyped :
	int ft_iterative_factorial(int nb);
	
	Your function must return its result in less than two seconds.
*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
