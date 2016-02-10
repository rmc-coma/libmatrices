/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:06:59 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 15:25:52 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_vec4ini(void)
{
	t_vec4	vector;

	vector.vec[0] = 0;
	vector.vec[1] = 0;
	vector.vec[2] = 0;
	vector.vec[3] = 0;
	vector.color = 0x00000000;
	return (vector);
}
