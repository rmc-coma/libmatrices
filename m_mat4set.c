/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:24:37 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:46:24 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4set(t_mat4 *matrix, t_mat4 values)
{
	matrix->mat[0][0] = values.mat[0][0];
	matrix->mat[1][0] = values.mat[1][0];
	matrix->mat[2][0] = values.mat[2][0];
	matrix->mat[3][0] = values.mat[3][0];
	matrix->mat[0][1] = values.mat[0][1];
	matrix->mat[1][1] = values.mat[1][1];
	matrix->mat[2][1] = values.mat[2][1];
	matrix->mat[3][1] = values.mat[3][1];
	matrix->mat[0][2] = values.mat[0][2];
	matrix->mat[1][2] = values.mat[1][2];
	matrix->mat[2][2] = values.mat[2][2];
	matrix->mat[3][2] = values.mat[3][2];
	matrix->mat[0][3] = values.mat[0][3];
	matrix->mat[1][3] = values.mat[1][3];
	matrix->mat[2][3] = values.mat[2][3];
	matrix->mat[3][3] = values.mat[3][3];
	return (matrix);
}
