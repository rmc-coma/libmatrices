/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4scl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 05:07:35 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

void	m_mat4scl(t_mat4 **matrix, long x_trs, long y_trs, long z_trs)
{
	t_mat4	*translation;

	translation = m_mat4idt();
	translation->mat[0][0] *= x_trs;
	translation->mat[1][1] *= y_trs;
	translation->mat[2][2] *= z_trs;
	*matrix = m_mat4mul(*matrix, translation);
	free(translation);
}
