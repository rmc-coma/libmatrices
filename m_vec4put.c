/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:31:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/29 23:49:39 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_vec4put(t_vec4 vec)
{
	t_size	i;

	i = 0;
	while (i < 4)
	{
		if (vec.vec[i] < 10)
			printf(" ");
		printf("%ld ", vec.vec[i]);
		i++;
	}
	printf("\n");
}
