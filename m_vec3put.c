/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:31:58 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 13:41:26 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
#include <stdio.h>

void	m_vec3put(t_vec3 vector)
{
	t_size	i;

	i = 0;
	while (i < 3)
	{
		if (vector.vec[i] < 10)
			printf(" ");
		printf("%f\n", vector.vec[i]);
		i++;
	}
	printf("\n");
}
