/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4pro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 07:27:21 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:46:57 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4pro(t_mat4 *modelview, float angle, float ratio)
{
	t_mat4	*matrix;
	float	near;
	float	far;
	T_MATU	z;

	matrix = m_mat4new();
	near = 1.0f;
	far = 100.0f;
	z = modelview->mat[2][2];
	angle = angle * M_PI / 180;
	matrix->mat[0][0] = 1.0f / (ratio * tan(angle / 2));
	matrix->mat[1][1] = 1.0f / (tan(angle / 2));
	matrix->mat[2][2] = (-(near * z) - (far * z)) / ((near * z) - (far * z));
	matrix->mat[2][3] = 2.0f * (far * z) * (near * z) / ((near * z) - (far * z));
	matrix->mat[3][2] = 1.0f;
	return (matrix);
}
