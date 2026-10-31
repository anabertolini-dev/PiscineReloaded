/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:32:17 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:33:59 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function that displays a string of characters 
	on the standard output.
	
	Here’s how it should be prototyped :
	void ft_putstr(char *str);
*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
