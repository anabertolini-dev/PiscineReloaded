/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:35:47 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/30 18:39:58 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a file ft_point.h that’ll compile the following main:
	
	#include "ft_point.h"
	void set_point(t_point *point)
	{
	point->x = 42;
	point->y = 21;
	}
	int main(void)
	{
	t_point point;
	set_point(&point);
	return (0);
	}
*/

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
