/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4mul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 23:46:53 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_vec4mul(t_vec4 left, t_mat4 right)
{
	t_vec4	vector;
	t_size	i;
	t_size	j;

	vector = m_vec4ini();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			vector.vec[i] += left.vec[j] * right.mat[i][j];
			j++;
		}
		i++;
	}
	return (vector);
}
