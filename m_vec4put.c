/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:31:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 23:38:34 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_vec4put(t_vec4 *vector)
{
	t_size	i;

	i = 0;
	while (i < 4)
	{
		if (vector->vec[i] < 10)
			printf(" ");
		printf("%ld ", vector->vec[i]);
		i++;
	}
	printf("\n\n");
}
