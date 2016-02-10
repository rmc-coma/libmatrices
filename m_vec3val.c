/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:31:47 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:44:35 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3val(T_MATU x, T_MATU y, T_MATU z)
{
	t_vec3	vector;

	vector.vec[0] = x;
	vector.vec[1] = y;
	vector.vec[2] = z;
	return (vector);
}
