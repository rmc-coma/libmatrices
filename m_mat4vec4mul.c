/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 23:29:35 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

void	m_mat4vec4mul(t_vec4 **vector, t_mat4 *left, t_vec4 *right)
{
	t_size	i;

	i = 0;
	while (i < 4)
	{
		(*vector)->vec[i] = (left->mat[i][0] * right->vec[0] +
							left->mat[i][1] * right->vec[1] +
							left->mat[i][2] * right->vec[2] +
							left->mat[i][3] * right->vec[3]);
		i++;
	}
}
