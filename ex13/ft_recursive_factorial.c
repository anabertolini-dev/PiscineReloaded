/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:24:13 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:27:22 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	 Create a recursive function that returns the factorial of the number 
	 given as a parameter.
	
	If there’s an error, the function should return 0.
	Here’s how it should be prototyped :
	int ft_recursive_factorial(int nb);
*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
