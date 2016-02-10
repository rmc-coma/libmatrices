/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:01:42 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 16:16:42 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4ini(void)
{
	t_mat4	matrix;

	matrix.mat[0][0] = 0;
	matrix.mat[0][1] = 0;
	matrix.mat[0][2] = 0;
	matrix.mat[0][3] = 0;
	matrix.mat[1][0] = 0;
	matrix.mat[1][1] = 0;
	matrix.mat[1][2] = 0;
	matrix.mat[1][3] = 0;
	matrix.mat[2][0] = 0;
	matrix.mat[2][1] = 0;
	matrix.mat[2][2] = 0;
	matrix.mat[2][3] = 0;
	matrix.mat[3][0] = 0;
	matrix.mat[3][1] = 0;
	matrix.mat[3][2] = 0;
	matrix.mat[3][3] = 0;
	return (matrix);
}
