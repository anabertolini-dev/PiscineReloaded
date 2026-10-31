/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:08:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:10:06 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function that displays the alphabet in lowercase, on a 
	single line, by ascending order, starting from the letter ’a’.

	Here’s how it should be prototyped :
	void ft_print_alphabet(void);
*/

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet < 'z' + 1)
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
