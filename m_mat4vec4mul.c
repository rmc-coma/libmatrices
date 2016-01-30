/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 02:04:54 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_mat4vec4mul(t_mat4 *right, t_vec4 *left)
{
	t_vec4	*vector;
	t_size	i;
	t_size	j;

	vector = m_vec4ini();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			vector->vec[i] += right->mat[i][j] * left->vec[j]; 
			j++;
		}
		i++;
	}
	return (vector);
}
