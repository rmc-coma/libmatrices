/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matsput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 01:30:05 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_matsput(t_mats *matrix)
{
	t_size	i;
	t_size	j;

	i = 0;
	while (i < matrix->mat_size)
	{
		j = 0;
		while (j < matrix->mat_size)
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
