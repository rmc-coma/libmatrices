/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrices.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:39:16 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:58:54 by rmc-coma         ###   ########.fr       */
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

t_mat4	mth_mat4ini(void);
t_mat4	mth_mat4idt(void);
t_mat4	mth_mat4add(t_mat4 left, t_mat4 right);
t_mat4	mth_mat4sub(t_mat4 left, t_mat4 right);
t_mat4	mth_mat4mul(t_mat4 left, t_mat4 right);

t_mats	mth_matsini(t_size mat_size);
t_mats	mth_matsidt(t_size mat_size);
t_mats	mth_matsadd(t_mats left, t_mats right);
t_mats	mth_matssub(t_mats left, t_mats right);
t_mats	mth_matsmul(t_mats left, t_mats right);

t_matx	mth_matxini(t_size x_size, t_size y_size);
t_matx	mth_matxadd(t_matx left, t_matx right);
t_matx	mth_matxsub(t_matx left, t_matx right);
t_matx	mth_matxmul(t_matx left, t_matx right);


void	mth_mat4put(t_mat4 mat);
void	mth_matsput(t_mats mat);
void	mth_matxput(t_matx mat);

#endif
