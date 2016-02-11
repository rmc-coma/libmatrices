/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3dot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 10:29:29 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 11:11:33 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

double	m_vec3dot(t_vec3 *left, t_vec3 *right)
{
	return (left->vec[0] * right->vec[0] +
			left->vec[1] * right->vec[1] +
			left->vec[2] * right->vec[2]);
}
