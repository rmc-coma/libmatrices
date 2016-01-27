/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_matsidt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 18:53:04 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:55:14 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mats	mth_matsidt(t_size mat_size)
{
	t_mats	matrix;
	t_size	i;

	matrix = mth_matsini(mat_size);
	i = 0;
	while (i < mat_size)
	{
		matrix.mat[i][i] = 1;
		i++;
	}
	return (matrix);
}
