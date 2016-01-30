/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 05:05:39 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_mat4vec4mul(t_mat4 *matrix, t_vec4 *vector)
{
	t_vec4	*new_vector;
	t_size	i;
	t_size	j;

	new_vector = m_vec4ini();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			new_vector->vec[i] += vector->vec[j] * matrix->mat[i][j];
			j++;
		}
		i++;
	}
	return (new_vector);
}
