/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matssub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:58:14 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:24:44 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mats	m_matssub(t_mats left, t_mats right)
{
	t_mats	matrix;
	t_size	i;
	t_size	j;

	if (left.mat_size != right.mat_size || left.mat_size < 1)
		exit(EXIT_FAILURE);
	matrix = m_matsini(left.mat_size);
	i = 0;
	while (i < left.mat_size)
	{
		j = 0;
		while (j < left.mat_size)
		{
			matrix.mat[i][j] = left.mat[i][j] - right.mat[i][j];
			j++;
		}
		i++;
	}
	return (matrix);
}
