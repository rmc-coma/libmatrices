/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:39:40 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 15:41:06 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	*m_vec3cpy(t_vec3 *vector)
{
	t_vec3	*copy;

	copy = (t_vec3 *)malloc(sizeof(t_vec3));
	copy->vec[0] = vector->vec[0];
	copy->vec[1] = vector->vec[1];
	copy->vec[2] = vector->vec[2];
	return (copy);
}
