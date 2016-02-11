/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4pro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 07:27:21 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 14:20:31 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4pro(double angle, double ratio, double near, double far)
{
	t_mat4	matrix;

	matrix = m_mat4ini();
	//angle = angle * M_PI / 180;
	matrix.mat[0][0] = 1 / (ratio * tan(angle / 2));
	matrix.mat[1][1] = 1 / (tan(angle / 2));
	matrix.mat[2][2] = -(-near - far) / (near - far);
	matrix.mat[3][2] = 2 * far * near / (near - far);
	matrix.mat[2][3] = -1;
	return (matrix);
}
