/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:30:54 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

int	main(void)
{
	t_mat4	modelview;
	t_mat4	projection;

	modelview = m_mat4lat(m_vec3val(1, 1, 1), m_vec3val(0, 0, 0), m_vec3val(0, 1, 0));
	projection = m_mat4pro(55.0, (double)(1280.0 / 720.0), 1.0, 100.0);
	m_mat4put(projection);
	printf("\n");
	m_mat4put(modelview);
	printf("\n");
	m_mat4put(m_mat4mul(&projection, &modelview));
	return (0);
}
