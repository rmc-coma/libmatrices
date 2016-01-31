/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 01:43:34 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 01:51:53 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4cpy(t_mat4 *matrix)
{
	t_mat4	*copy;
	t_size	i;
	t_size	j;

	copy = (t_mat4 *)malloc(sizeof(t_mat4));
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			copy->mat[i][j] = matrix->mat[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}
