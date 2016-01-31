/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrices.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:39:16 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/31 04:00:29 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATRICES_H
# define LIBMATRICES_H

# include <stdlib.h>
# include <math.h>

/*
** t_matu == Variable type which globally defines for a project the
** type of vars stored in the matrices, "type of matrix unit"
*/

# define T_MATU float

/*
** Custom types
*/

typedef unsigned int	t_size;

/*
** Matrices structures
*/

typedef struct			s_mat4
{
	T_MATU	mat[4][4];
}						t_mat4;

typedef struct			s_vec4
{
	T_MATU	vec[4];
}						t_vec4;

/*
** """Constructors"""
*/

t_vec4					*m_vec4ini(void);
t_vec4					*m_vec4val(T_MATU x, T_MATU y, T_MATU z, T_MATU w);
t_vec4					*m_vec4cpy(t_vec4 *vector);

t_mat4					*m_mat4ini(void);
t_mat4					*m_mat4idt(void);
t_mat4					*m_mat4val(t_vec4 *first, t_vec4 *second,
								t_vec4 *third, t_vec4 *fourth);
t_mat4					*m_mat4cpy(t_mat4 *matrix);

/*
** Operations functions
*/

void					m_mat4add(t_mat4 **matrix, t_mat4 *left, t_mat4 *right);
void					m_mat4sub(t_mat4 **matrix, t_mat4 *left, t_mat4 *right);
void					m_mat4mul(t_mat4 **matrix, t_mat4 *left, t_mat4 *right);

/*
** Special operations functions
*/

void					m_mat4vec4mul(t_vec4 **vector, t_mat4 *left, t_vec4 *right);

/*
** Transformations functions
*/

void					m_mat4trs(t_mat4 **matrix,
								T_MATU x_trs, T_MATU y_trs, T_MATU z_trs);
void					m_mat4scl(t_mat4 **matrix,
								T_MATU x_scl, T_MATU y_scl, T_MATU z_scl);
void					m_mat4rot(t_mat4 **matrix, float angle, t_vec4 *axle);


/*
** Debug fonctions
** /!\ USE PRINTF
*/

void					m_mat4put(t_mat4 *matrix);
void					m_vec4put(t_vec4 *vector);

#endif
