/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:18:14 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/29 15:19:34 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a function ft_div_mod prototyped like this :
	void ft_div_mod(int a, int b, int *div, int *mod)
	
	This function divides parameters a by b and stores the result in the 
	int pointed by div. It also stores the remainder of the division 
	of a by b in the int pointed by mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
