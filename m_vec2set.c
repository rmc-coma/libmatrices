/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:05:51 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 16:07:50 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	*m_vec2set(t_vec2 *vector, t_vec2 values)
{
	vector->vec[0] = values.vec[0];
	vector->vec[1] = values.vec[1];
	return (vector);
}
