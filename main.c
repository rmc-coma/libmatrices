/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 02:05:55 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

int	main(void)
{
	t_mat4	*matrix;
	t_vec4	*vector;

	matrix = m_mat4val(m_vec4val(1, 2, 3, 0), m_vec4val(2, 1, 2, 0), m_vec4val(3, 2, 1, 0), m_vec4val(0, 0, 0, 0));
	m_mat4put(matrix);
	vector = m_vec4val(1, 2, 3, 0);
	m_vec4put(vector);
	m_vec4put(m_mat4vec4mul(matrix, vector));
	return (0);
}
