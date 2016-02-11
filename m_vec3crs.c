/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3crs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 13:19:11 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 13:30:44 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3crs(t_vec3 *left, t_vec3 *right)
{
	t_vec3	vector;

	vector.vec[0] = left->vec[1] * right->vec[2] - left->vec[2] * right->vec[1];
	vector.vec[1] = left->vec[2] * right->vec[0] - left->vec[0] * right->vec[2];
	vector.vec[2] = left->vec[0] * right->vec[1] - left->vec[1] * right->vec[0];
	return (vector);
}
