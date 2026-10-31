/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:24:05 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/30 18:30:14 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a macro ABS which replaces its argument by it absolute value:
	#define ABS(Value)
*/

#ifndef FT_ABS_H

# define FT_ABS_H
# define ABS(x) (((x) < 0) ? -(x) : (x))

#endif
