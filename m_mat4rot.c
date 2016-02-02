/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4rot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/02 10:00:29 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

void    m_mat4rot(t_mat4 **matrix, float angle, t_vec4 *axle)
{
	T_MATU  x;
	T_MATU  y;
	T_MATU  z;
	t_mat4  *rotation;

	rotation = m_mat4idt();
	x = axle->vec[0];
	y = axle->vec[1];
	z = axle->vec[2];
	rotation->mat[0][0] = x * x * (1 - cos(angle)) + cos(angle);
	rotation->mat[0][1] = x * y * (1 - cos(angle)) - z * sin(angle);
	rotation->mat[0][2] = x * z * (1 - cos(angle)) + y * sin(angle);
	rotation->mat[1][0] = x * y * (1 - cos(angle)) + z * sin(angle);
	rotation->mat[1][1] = y * y * (1 - cos(angle)) + cos(angle);
	rotation->mat[1][2] = y * z * (1 - cos(angle)) - x * sin(angle);
	rotation->mat[2][0] = x * z * (1 - cos(angle)) - y * sin(angle);
	rotation->mat[2][1] = y * z * (1 - cos(angle)) + x * sin(angle);
	rotation->mat[2][2] = z * z * (1 - cos(angle)) + cos(angle);
	m_mat4mul(matrix, *matrix, rotation);
	free(rotation);
}
