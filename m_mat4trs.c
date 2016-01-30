/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4trs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 05:07:23 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

void	m_mat4trs(t_mat4 **matrix, long x_trs, long y_trs, long z_trs)
{
	t_mat4	*translation;

	translation = m_mat4idt();
	translation->mat[0][3] += x_trs;
	translation->mat[1][3] += y_trs;
	translation->mat[2][3] += z_trs;
	*matrix = m_mat4mul(*matrix, translation);
	free(translation);
}
