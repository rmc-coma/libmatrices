/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matxput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 20:46:27 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 01:30:39 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_matxput(t_matx *matrix)
{
	t_size	i;
	t_size	j;

	i = 0;
	while (i < matrix->x_size)
	{
		j = 0;
		while (j < matrix->y_size)
		{
			if (matrix->mat[i][j] < 10)
				printf(" ");
			printf("%ld ", matrix->mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
