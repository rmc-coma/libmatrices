/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_matsput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:24:25 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_matsput(t_mats mat)
{
	t_size	i;
	t_size	j;

	i = 0;
	while (i < mat.mat_size)
	{
		j = 0;
		while (j < mat.mat_size)
		{
			if (mat.mat[i][j] < 10)
				printf(" ");
			printf("%ld ", mat.mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
