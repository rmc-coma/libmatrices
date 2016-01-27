/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_matxsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 20:47:41 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:57:47 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_matx	mth_matxsub(t_matx left, t_matx right)
{
	t_matx	matrix;
	t_size	i;
	t_size	j;

	if (left.x_size < 1 || left.y_size < 1 ||
		right.x_size < 1 || right.y_size < 1 ||
		left.x_size != right.x_size || left.y_size != right.y_size)
		exit(EXIT_FAILURE);
	matrix = mth_matxini(left.x_size, left.y_size);
	i = 0;
	while (i < left.x_size)
	{
		j = 0;
		while (j < left.y_size)
		{
			matrix.mat[i][j] = left.mat[i][j] - right.mat[i][j];
			j++;
		}
		i++;
	}
	return (matrix);
}
