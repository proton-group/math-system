#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

typedef struct{
    int xsize; 
    int ysize;
    char data[];
} matrix;

matrix set(int xszie, int yszie, char *data);
int* matrix2massiv(matrix m);
matrix operator+(matrix f_matrix, matrix s_matrix);
matrix operator+(matrix f_matrix, float num);
matrix operator-(matrix f_matrix, matrix s_matrix);
matrix operator-(matrix f_matrix, float num);
matrix operator*(matrix f_matrix, matrix s_matrix);
matrix operator*(matrix f_matrix, float num);
bool diag_check(matrix m);
matrix diag(matrix m);
matrix jordan(matrix m);
matrix mfun(float *function, matrix m);

#endif