/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 01:40:46 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/06 08:04:29 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4cpy(t_vec4 *vector)
{
	t_vec4	*copy;

	copy = (t_vec4 *)malloc(sizeof(t_vec4));
	copy->vec[0] = vector->vec[0];
	copy->vec[1] = vector->vec[1];
	copy->vec[2] = vector->vec[2];
	copy->vec[3] = vector->vec[3];
	copy->color = vector->color;
	return (copy);
}
