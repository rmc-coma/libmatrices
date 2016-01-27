/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_mat4mul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 22:18:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:53:40 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	mth_mat4mul(t_mat4 left, t_mat4 right)
{
	t_mat4	matrix;
	t_size	i;
	t_size	j;
	t_size	k;

	matrix = mth_mat4ini();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				matrix.mat[i][j] += left.mat[i][k] * right.mat[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
	return (matrix);
}
