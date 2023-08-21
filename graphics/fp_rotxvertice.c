/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_rotxvertice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:07:23 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/21 10:23:05 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

void	fp_rotxvertice(t_vector *vertice, int quantity, double angle)
{
	int	i;
	int	new_y;
	int	new_z;

	i = 0;
	while (i < quantity)
	{
		new_y = (vertice[i].y * cos(angle))
				- (vertice[i].z * sin(angle));
		new_z = (vertice[i].y * sin(angle))
				+ (vertice[i].z * cos(angle));
		vertice[i].y = new_y;
		vertice[i].z = new_z;
		i++;
	}
}
