/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:08:10 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 16:09:30 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	*m_vec2cpy(t_vec2 *vector)
{
	t_vec2	*copy;

	copy = (t_vec2 *)malloc(sizeof(t_vec2));
	copy->vec[0] = vector->vec[0];
	copy->vec[1] = vector->vec[1];
	return (copy);
}
