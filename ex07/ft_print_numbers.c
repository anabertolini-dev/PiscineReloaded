/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:10:39 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:12:01 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function that displays all digits, on a single line, 
	by ascending order.
	
	Here’s how it should be prototyped :
	void ft_print_numbers(void);
*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	digits;

	digits = '0';
	while (digits <= '9')
	{
		ft_putchar(digits);
		digits++;
	}
}
