/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matsmul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:58:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:24:11 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mats	m_matsmul(t_mats left, t_mats right)
{
	t_mats	matrix;
	t_size	i;
	t_size	j;
	t_size	k;

	if (left.mat_size != right.mat_size || left.mat_size < 1)
		exit(EXIT_FAILURE);
	matrix = m_matsini(left.mat_size);
	i = 0;
	while (i < left.mat_size)
	{
		j = 0;
		while (j < left.mat_size)
		{
			k = 0;
			while (k < left.mat_size)
			{
				matrix.mat[i][j] += left.mat[i][k] * right.mat[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
	return (matrix);
}
