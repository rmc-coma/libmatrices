/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3nrm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:51:00 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/12 10:14:03 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3nrm(t_vec3 vector)
{
	double	magnitude;
	t_vec3	normalized;

	magnitude = m_vec3mag(&vector);
	normalized.vec[0] = vector.vec[0] / magnitude;
	normalized.vec[1] = vector.vec[1] / magnitude;
	normalized.vec[2] = vector.vec[2] / magnitude;
	return (normalized);
}
