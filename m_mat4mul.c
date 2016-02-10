/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4mul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 22:18:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:15:04 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4mul(t_mat4 *matrix, t_mat4 *left, t_mat4 *right)
{
	t_mat4	tmp;
	t_size	i;
	t_size	j;

	tmp = m_mat4val(m_vec4val(left->mat[0][0], left->mat[1][0], left->mat[2][0],
	left->mat[3][0]), m_vec4val(left->mat[0][1], left->mat[1][1],
	left->mat[2][1], left->mat[3][1]), m_vec4val(left->mat[0][2],
	left->mat[1][2], left->mat[2][2], left->mat[3][2]), m_vec4val(
	left->mat[0][3], left->mat[1][3], left->mat[2][3], left->mat[3][3]));
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix->mat[i][j] = (tmp.mat[i][0] * right->mat[0][j] +
								tmp.mat[i][1] * right->mat[1][j] +
								tmp.mat[i][2] * right->mat[2][j] +
								tmp.mat[i][3] * right->mat[3][j]);
			j++;
		}
		i++;
	}
	return (matrix);
}
