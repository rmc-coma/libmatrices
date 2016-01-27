/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_matsini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:04:12 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:55:33 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mats	mth_matsini(t_size mat_size)
{
	t_mats	matrix;
	t_size	i;
	t_size	j;

	if (mat_size < 1)
		exit(EXIT_FAILURE);
	matrix.mat = (long **)malloc(sizeof(long *) * mat_size);
	i = 0;
	while (i < mat_size)
	{
		matrix.mat[i] = (long *)malloc(sizeof(long) * mat_size);
		j = 0;
		while (j < mat_size)
		{
			matrix.mat[i][j] = 0;
			j++;
		}
		i++;
	}
	matrix.mat_size = mat_size;
	return (matrix);
}
