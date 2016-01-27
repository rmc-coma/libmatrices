/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 23:09:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/01/27 19:58:17 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"
/*
int	main(void)
{
	t_mat4 mat1;
	t_mat4 mat2;

	mat1.mat[0][0] = 1;
	mat1.mat[0][1] = 2;
	mat1.mat[0][2] = 3;
	mat1.mat[0][3] = 4;

	mat1.mat[1][0] = 2;
	mat1.mat[1][1] = 1;
	mat1.mat[1][2] = 4;
	mat1.mat[1][3] = 3;

	mat1.mat[2][0] = 3;
	mat1.mat[2][1] = 4;
	mat1.mat[2][2] = 1;
	mat1.mat[2][3] = 2;

	mat1.mat[3][0] = 4;
	mat1.mat[3][1] = 3;
	mat1.mat[3][2] = 2;
	mat1.mat[3][3] = 1;


	mat2.mat[0][0] = 5;
	mat2.mat[0][1] = 6;
	mat2.mat[0][2] = 7;
	mat2.mat[0][3] = 8;

	mat2.mat[1][0] = 6;
	mat2.mat[1][1] = 5;
	mat2.mat[1][2] = 8;
	mat2.mat[1][3] = 7;

	mat2.mat[2][0] = 7;
	mat2.mat[2][1] = 8;
	mat2.mat[2][2] = 5;
	mat2.mat[2][3] = 6;

	mat2.mat[3][0] = 8;
	mat2.mat[3][1] = 7;
	mat2.mat[3][2] = 6;
	mat2.mat[3][3] = 5;

	mth_mat4put(mth_mat4mul(mat1, mth_mat4idt()));
	return (0);
}
*/
 /*
int main(void)
{
	t_mats	example;

	example = mth_matsidt(20);
	mth_matsput(example);
	return (0);
}
*/
int	main(void)
{
	t_matx mat1;
	t_matx mat2;

	mat1 = mth_matxini(2, 3);
	mat2 = mth_matxini(3, 4);

	mat1.mat[0][0] = 1;
	mat1.mat[0][1] = 2;
	mat1.mat[0][2] = 3;

	mat1.mat[1][0] = 3;
	mat1.mat[1][1] = 1;
	mat1.mat[1][2] = 2;


	mat2.mat[0][0] = 5;
	mat2.mat[0][1] = 6;
	mat2.mat[0][2] = 7;
	mat2.mat[0][3] = 8;

	mat2.mat[1][0] = 6;
	mat2.mat[1][1] = 5;
	mat2.mat[1][2] = 8;
	mat2.mat[1][3] = 7;

	mat2.mat[2][0] = 7;
	mat2.mat[2][1] = 8;
	mat2.mat[2][2] = 5;
	mat2.mat[2][3] = 6;

	mth_matxput(mth_matxini(2, 3));

	mth_matxput(mth_matxmul(mat1, mat2));
	return (0);
}
