/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:33:42 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 15:34:43 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	*m_vec3set(t_vec3 *vector, t_vec3 values)
{
	vector->vec[0] = values.vec[0];
	vector->vec[1] = values.vec[1];
	vector->vec[2] = values.vec[2];
	return (vector);
}
