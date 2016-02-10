/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:02:44 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 18:04:52 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	m_vec2val(T_MATU x, T_MATU y)
{
	t_vec2	vector;

	vector.vec[0] = x;
	vector.vec[1] = y;
	return (vector);
}
