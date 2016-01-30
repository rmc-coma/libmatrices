/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:06:59 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 01:01:26 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4val(long x, long y, long z, long w)
{
	t_vec4	*vector;

	vector = (t_vec4 *)malloc(sizeof(t_vec4));
	vector->vec[0] = x;
	vector->vec[1] = y;
	vector->vec[2] = z;
	vector->vec[3] = w;
	return (vector);
}
