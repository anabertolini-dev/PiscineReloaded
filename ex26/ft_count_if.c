/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:02:18 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/30 19:07:44 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function ft_count_if which will return the number of 
	elements of the array that return 1, passed to the function f.
	
	Here’s how it should be prototyped:
	int ft_count_if(char **tab, int (*f)(char*));
	
	The array will be terminated by 0
*/

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
