/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:31:27 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 10:52:50 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4sub(t_mat4 *left, t_mat4 *right)
{
	t_mat4	matrix;

	matrix.mat[0][0] = left->mat[0][0] - right->mat[0][0];
	matrix.mat[1][0] = left->mat[1][0] - right->mat[1][0];
	matrix.mat[2][0] = left->mat[2][0] - right->mat[2][0];
	matrix.mat[3][0] = left->mat[3][0] - right->mat[3][0];
	matrix.mat[0][1] = left->mat[0][1] - right->mat[0][1];
	matrix.mat[1][1] = left->mat[1][1] - right->mat[1][1];
	matrix.mat[2][1] = left->mat[2][1] - right->mat[2][1];
	matrix.mat[3][1] = left->mat[3][1] - right->mat[3][1];
	matrix.mat[0][2] = left->mat[0][2] - right->mat[0][2];
	matrix.mat[1][2] = left->mat[1][2] - right->mat[1][2];
	matrix.mat[2][2] = left->mat[2][2] - right->mat[2][2];
	matrix.mat[3][2] = left->mat[3][2] - right->mat[3][2];
	matrix.mat[0][3] = left->mat[0][3] - right->mat[0][3];
	matrix.mat[1][3] = left->mat[1][3] - right->mat[1][3];
	matrix.mat[2][3] = left->mat[2][3] - right->mat[2][3];
	matrix.mat[3][3] = left->mat[3][3] - right->mat[3][3];
	return (matrix);
}
