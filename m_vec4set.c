/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:27:25 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/12 10:26:28 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4set(t_vec4 *vector, t_vec4 values)
{
	vector->vec[0] = values.vec[0];
	vector->vec[1] = values.vec[1];
	vector->vec[2] = values.vec[2];
	vector->vec[3] = values.vec[3];
	return (vector);
}
