/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 01:43:34 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 16:29:08 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4cpy(t_mat4 *matrix)
{
	t_mat4	*copy;

	copy = (t_mat4 *)malloc(sizeof(t_mat4));
	copy->mat[0][0] = matrix->mat[0][0];
	copy->mat[1][0] = matrix->mat[1][0];
	copy->mat[2][0] = matrix->mat[2][0];
	copy->mat[3][0] = matrix->mat[3][0];
	copy->mat[0][1] = matrix->mat[0][1];
	copy->mat[1][1] = matrix->mat[1][1];
	copy->mat[2][1] = matrix->mat[2][1];
	copy->mat[3][1] = matrix->mat[3][1];
	copy->mat[0][2] = matrix->mat[0][2];
	copy->mat[1][2] = matrix->mat[1][2];
	copy->mat[2][2] = matrix->mat[2][2];
	copy->mat[3][2] = matrix->mat[3][2];
	copy->mat[0][3] = matrix->mat[0][3];
	copy->mat[1][3] = matrix->mat[1][3];
	copy->mat[2][3] = matrix->mat[2][3];
	copy->mat[3][3] = matrix->mat[3][3];
	return (copy);
}
