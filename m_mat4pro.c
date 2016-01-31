/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4pro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 07:27:21 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 07:32:50 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4pro(T_MATU angle, T_MATU ratio, T_MATU near, T_MATU far)
{
	t_mat4	*matrix;

	matrix = m_mat4ini();
	matrix->mat[0][0] = 1 / (ratio * tan(angle / 2));
	matrix->mat[1][1] = 1 / (tan(angle / 2));
	matrix->mat[2][2] = -(far + near) / (far - near);
	matrix->mat[2][3] = -(2 * far * near) / (far - near);
	matrix->mat[3][3] = -(2 * far * near) / (far - near);
	return (matrix);
}
