/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:31:41 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_mat4vec4mul(t_vec4 *vector, t_mat4 *left, t_vec4 *right)
{
	t_mat4	tmp;
	t_size	i;

	tmp = m_mat4val(m_vec4val(left->mat[0][0], left->mat[1][0], left->mat[2][0],
	left->mat[3][0]), m_vec4val(left->mat[0][1], left->mat[1][1],
	left->mat[2][1], left->mat[3][1]), m_vec4val(left->mat[0][2],
	left->mat[1][2], left->mat[2][2], left->mat[3][2]), m_vec4val(
	left->mat[0][3], left->mat[1][3], left->mat[2][3], left->mat[3][3]));
	i = 0;
	while (i < 4)
	{
		vector->vec[i] = (tmp.mat[i][0] * right->vec[0] +
						tmp.mat[i][1] * right->vec[1] +
						tmp.mat[i][2] * right->vec[2] +
						tmp.mat[i][3] * right->vec[3]);
		i++;
	}
	return (vector);
}
