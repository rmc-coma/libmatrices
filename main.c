/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 05:08:16 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

int	main(void)
{
	t_mat4	*projection;
	t_vec4	*vector;

	projection = m_mat4idt();
	vector = m_vec4val(1, 1, 1, 1);
	m_mat4scl(&projection, 10, 2, 2);
	m_mat4put(projection);
	vector = m_mat4vec4mul(projection, vector);
	m_vec4put(vector);
	return (0);
}
