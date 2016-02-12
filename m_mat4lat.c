/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4lat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:19:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/12 10:09:33 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4lat(t_vec3 eye, t_vec3 center, t_vec3 up)
{
	t_vec3	f;
	t_vec3	u;
	t_vec3	s;
	t_mat4	matrix;

	f = m_vec3nrm(m_vec3sub(&center, &eye));
	m_vec3put(f);
	u = m_vec3nrm(up);
	m_vec3put(u);
	m_vec3put(m_vec3crs(&f, &u));
	s = m_vec3nrm(m_vec3crs(&f, &u));
	m_vec3put(s);
	matrix = m_mat4idt();
	u = m_vec3crs(&s, &f);
	matrix.mat[0][0] = s.vec[0];
	matrix.mat[1][0] = s.vec[1];
	matrix.mat[2][0] = s.vec[2];
	matrix.mat[0][1] = u.vec[0];
	matrix.mat[1][1] = u.vec[1];
	matrix.mat[2][1] = u.vec[2];
	matrix.mat[0][2] = -(f.vec[0]);
	matrix.mat[1][2] = -(f.vec[1]);
	matrix.mat[2][2] = -(f.vec[2]);
	matrix.mat[3][0] = -(m_vec3dot(&s, &eye));
	matrix.mat[3][1] = -(m_vec3dot(&u, &eye));
	matrix.mat[3][2] = m_vec3dot(&f, &eye);
	return (matrix);
}
