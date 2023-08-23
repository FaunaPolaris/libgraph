/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:06:13 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/21 08:49:36 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

void	fp_putline(t_mlx *data, t_vector point_a, t_vector point_b)
{
	double	t;
	int	x;
	int	y;

	t = 0;
	while (t <= 1)
	{
		x = ((1 - t) * point_a.x + (t * point_b.x)) + WIDTH / 2;
		y = ((1 - t) * point_a.y + (t * point_b.y)) + HEIGHT / 2;
		fp_putpixel(data, x, y, 0xFF0000);
		t += 0.008;
	}
}

// P(t) = (1−t)⋅P1 + t⋅P2