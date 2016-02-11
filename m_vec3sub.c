/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:43:50 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 10:37:57 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3sub(t_vec3 *left, t_vec3 *right)
{
	t_vec3	vector;

	vector.vec[0] = left->vec[0] - right->vec[0];
	vector.vec[1] = left->vec[1] - right->vec[1];
	vector.vec[2] = left->vec[2] - right->vec[2];
	return (vector);
}
