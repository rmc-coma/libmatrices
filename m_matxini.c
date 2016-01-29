/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matxini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 20:19:23 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:25:31 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_matx	m_matxini(t_size x_size, t_size y_size)
{
	t_matx	matrix;
	t_size	i;
	t_size	j;

	if (x_size < 1 || y_size < 1)
		exit(EXIT_FAILURE);
	matrix.mat = (long **)malloc(sizeof(long *) * x_size);
	i = 0;
	while (i < x_size)
	{
		matrix.mat[i] = (long *)malloc(sizeof(long) * y_size);
		j = 0;
		while (j < y_size)
		{
			matrix.mat[i][j] = 0;
			j++;
		}
		i++;
	}
	matrix.x_size = x_size;
	matrix.y_size = y_size;
	return (matrix);
}
