/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 05:10:43 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

int	main(void)
{
	t_mat4	*matrix;

	matrix = m_mat4idt();
	m_mat4put(matrix);
	m_mat4trs(&matrix, 10.0f, 5.0f, 0.0f);
	m_mat4put(matrix);
	m_mat4scl(&matrix, 10.0f, 10.0f, 10.0f);
	m_mat4put(matrix);
	m_mat4rot(&matrix, 90.0f, m_vec4val(0.0f, 0.0f, 1.0f, 0.0f));
	m_mat4put(matrix);
	return (0);
}
