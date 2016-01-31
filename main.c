/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 07:35:58 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

int	main(void)
{
	t_mat4	*matrix;
	t_mat4	*projection;
	t_vec4	*vector;

	matrix = m_mat4idt();
	projection = m_mat4pro(70.0f, 640 / 480, 1.0f, 1000.0f);
	vector = m_vec4val(10.0f, 5.0f, 1.0f, 1.0f);
	m_mat4put(matrix);
	m_mat4trs(&matrix, 10.0f, 5.0f, 0.0f);
	m_mat4put(matrix);
	m_mat4scl(&matrix, 10.0f, 10.0f, 10.0f);
	m_mat4put(matrix);
	m_mat4rot(&matrix, 90.0f, m_vec4val(1.0f, 1.0f, 0.0f, 0.0f));
	m_mat4put(matrix);
	m_mat4mul(&matrix, projection, matrix);
	m_mat4put(matrix);
	m_mat4vec4mul(&vector, matrix, vector);
	m_vec4put(vector);
	return (0);
}
