/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_mat4ini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:01:42 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:53:10 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	mth_mat4ini(void)
{
	t_mat4	matrix;
	t_size	i;
	t_size	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix.mat[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}
