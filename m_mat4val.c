/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:09:51 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 16:31:39 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4val(t_vec4 first, t_vec4 second, t_vec4 third, t_vec4 fourth)
{
	t_mat4	matrix;

	matrix.mat[0][0] = first.vec[0];
	matrix.mat[1][0] = first.vec[1];
	matrix.mat[2][0] = first.vec[2];
	matrix.mat[3][0] = first.vec[3];
	matrix.mat[0][1] = second.vec[0];
	matrix.mat[1][1] = second.vec[1];
	matrix.mat[2][1] = second.vec[2];
	matrix.mat[3][1] = second.vec[3];
	matrix.mat[0][2] = third.vec[0];
	matrix.mat[1][2] = third.vec[1];
	matrix.mat[2][2] = third.vec[2];
	matrix.mat[3][2] = third.vec[3];
	matrix.mat[0][3] = fourth.vec[0];
	matrix.mat[1][3] = fourth.vec[1];
	matrix.mat[2][3] = fourth.vec[2];
	matrix.mat[3][3] = fourth.vec[3];
	return (matrix);
}
