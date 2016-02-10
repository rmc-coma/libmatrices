/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 18:12:19 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

int	main(void)
{
	t_mat4	mat1;
	t_mat4	mat2;

	mat1 = m_mat4val(m_vec4val(1, 2, 3, 4),
					 m_vec4val(2, 1, 4, 3),
					 m_vec4val(3, 4, 1, 2),
					 m_vec4val(4, 3, 2, 1));
	mat2 = m_mat4val(m_vec4val(5, 6, 7, 8),
					 m_vec4val(6, 5, 8, 7),
					 m_vec4val(7, 8, 5, 6),
					 m_vec4val(8, 7, 6, 5));
	m_mat4put(m_mat4mul(&mat1, &mat1, &mat2));
	return (0);
}
