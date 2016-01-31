/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4trs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 05:11:41 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

void	m_mat4trs(t_mat4 **matrix, T_MATU x_trs, T_MATU y_trs, T_MATU z_trs)
{
	t_mat4	*translation;

	translation = m_mat4idt();
	translation->mat[0][3] += x_trs;
	translation->mat[1][3] += y_trs;
	translation->mat[2][3] += z_trs;
	m_mat4mul(matrix, *matrix, translation);
	free(translation);
}
