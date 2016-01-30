/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:04:49 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 00:57:02 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4ini(void)
{
	t_vec4	*vector;
	t_size	i;

	vector = (t_vec4 *)malloc(sizeof(t_vec4));
	i = 0;
	while (i < 4)
		vector->vec[i++] = 0;
	return (vector);
}
