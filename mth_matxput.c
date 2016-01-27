/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_matxput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 20:46:27 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:57:37 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	mth_matxput(t_matx mat)
{
	t_size	i;
	t_size	j;

	i = 0;
	while (i < mat.x_size)
	{
		j = 0;
		while (j < mat.y_size)
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
