/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4mul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 22:18:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 10:54:00 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4mul(t_mat4 *left, t_mat4 *right)
{
	t_size	i;
	t_size	j;
	t_mat4	matrix;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix.mat[i][j] = (left->mat[i][0] * right->mat[0][j] +
								left->mat[i][1] * right->mat[1][j] +
								left->mat[i][2] * right->mat[2][j] +
								left->mat[i][3] * right->mat[3][j]);
			j++;
		}
		i++;
	}
	return (matrix);
}
