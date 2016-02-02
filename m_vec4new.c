/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:06:59 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/02 10:06:07 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_vec4new(T_MATU x, T_MATU y, T_MATU z, T_MATU w)
{
	t_vec4	vector;

	vector.vec[0] = x;
	vector.vec[1] = y;
	vector.vec[2] = z;
	vector.vec[3] = w;
	return (vector);
}
