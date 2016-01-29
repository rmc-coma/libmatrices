/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:09:51 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 22:58:48 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4val(t_vec4 first, t_vec4 second, t_vec4 third, t_vec4 fourth)
{
	t_mat4	matrix;
	t_size	i;

	i = 0;
	while (i < 4)
	{
		matrix.mat[i][0] = first.vec[i];
		matrix.mat[i][1] = second.vec[i];
		matrix.mat[i][2] = third.vec[i];
		matrix.mat[i][3] = fourth.vec[i];
		i++;
	}
	return (matrix);
}
