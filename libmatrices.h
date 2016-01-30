/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrices.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:39:16 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/30 01:13:10 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATRICES_H
# define LIBMATRICES_H

# include <stdlib.h>

typedef unsigned int	t_size;

typedef struct			s_mat4
{
	long	mat[4][4];
}						t_mat4;

typedef struct			s_vec4
{
	long	vec[4];
}						t_vec4;

typedef struct			s_mats
{
	long	**mat;
	t_size	mat_size;
}						t_mats;

typedef struct			s_matx
{
	long	**mat;
	t_size	x_size;
	t_size	y_size;
}						t_matx;

t_vec4					*m_vec4ini(void);
t_vec4					*m_vec4val(long x, long y, long z, long w);
t_vec4					*m_vec4mul(t_vec4 *vector, t_mat4 *matrix);

t_mat4					*m_mat4ini(void);
t_mat4					*m_mat4idt(void);
t_mat4					*m_mat4val(t_vec4 *first, t_vec4 *second,
								t_vec4 *third, t_vec4 *fourth);
t_mat4					*m_mat4add(t_mat4 *left, t_mat4 *right);
t_mat4					*m_mat4sub(t_mat4 *left, t_mat4 *right);
t_mat4					*m_mat4mul(t_mat4 *left, t_mat4 *right);

t_mats					m_matsini(t_size mat_size);
t_mats					m_matsidt(t_size mat_size);
t_mats					m_matsadd(t_mats left, t_mats right);
t_mats					m_matssub(t_mats left, t_mats right);
t_mats					m_matsmul(t_mats left, t_mats right);

t_matx					m_matxini(t_size x_size, t_size y_size);
t_matx					m_matxadd(t_matx left, t_matx right);
t_matx					m_matxsub(t_matx left, t_matx right);
t_matx					m_matxmul(t_matx left, t_matx right);

void					m_mat4put(t_mat4 *matrix);
void					m_matsput(t_mats *matrix);
void					m_matxput(t_matx *matrix);
void					m_vec4put(t_vec4 *vector);

#endif
