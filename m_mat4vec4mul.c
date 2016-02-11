/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 11:12:13 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_mat4vec4mul(t_mat4 *left, t_vec4 *right)
{
	t_size	i;
	t_vec4	vector;

	i = 0;
	while (i < 4)
	{
		vector.vec[i] = (left->mat[i][0] * right->vec[0] +
						left->mat[i][1] * right->vec[1] +
						left->mat[i][2] * right->vec[2] +
						left->mat[i][3] * right->vec[3]);
		i++;
	}
	return (vector);
}
