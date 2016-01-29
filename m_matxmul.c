/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matxmul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 20:33:06 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 23:49:21 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_matx	m_matxmul(t_matx left, t_matx right)
{
	t_matx	matrix;
	t_size	i;
	t_size	j;
	t_size	k;

	if (left.y_size != right.x_size || left.x_size < 1 || left.y_size < 1 ||
		right.x_size < 1 || right.y_size < 1)
		exit(EXIT_FAILURE);
	matrix = m_matxini(left.x_size, right.y_size);
	i = 0;
	while (i < left.x_size)
	{
		j = 0;
		while (j < right.y_size)
		{
			k = 0;
			while (k++ < left.y_size)
			{
				matrix.mat[i][j] += left.mat[i][k - 1] * right.mat[k - 1][j];
			}
			j++;
		}
		i++;
	}
	return (matrix);
}
