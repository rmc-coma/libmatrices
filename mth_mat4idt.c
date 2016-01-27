/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mth_mat4idt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:53:06 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:52:57 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	mth_mat4idt(void)
{
	t_mat4	matrix;
	t_size	i;

	matrix = mth_mat4ini();
	i = 0;
	while (i < 4)
	{
		matrix.mat[i][i] = 1;
		i++;
	}
	return (matrix);
}
