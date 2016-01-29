/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:38:55 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:22:22 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4sub(t_mat4 left, t_mat4 right)
{
	t_mat4	matrix;
	t_size	i;
	t_size	j;

	matrix = m_mat4ini();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix.mat[i][j] = left.mat[i][j] - right.mat[i][j];
			j++;
		}
		i++;
	}
	return (matrix);
}
