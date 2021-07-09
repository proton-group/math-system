#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <cassert>
#include <cstdio>
#include <iostream>

typedef struct{
    int xsize; 
    int ysize;
    float *data;
} matrix;

matrix set(int xszie, int yszie, float *data);
matrix operator+(matrix f_matrix, matrix s_matrix);
matrix operator+(matrix f_matrix, float num);
matrix operator-(matrix f_matrix, matrix s_matrix);
matrix operator-(matrix f_matrix, float num);
matrix operator*(matrix f_matrix, matrix s_matrix);
matrix operator*(matrix f_matrix, float num);
//float eigenvalues(); //комлпексные может
//bool diag_check(matrix m);
//matrix diag(matrix m);
//matrix jordan(matrix m);
//matrix mfun(float *function, matrix m);

#endif