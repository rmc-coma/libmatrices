/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 23:38:21 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_mat4put(t_mat4 *matrix)
{
	t_size	i;
	t_size	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix->mat[i][j] < 10)
				printf(" ");
			printf("%ld ", matrix->mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}
