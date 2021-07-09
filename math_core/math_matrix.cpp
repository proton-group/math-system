#include "math_matrix.h"
//сначала оцифровать даты, потом сложить
matrix set(int xszie, int yszie, float *data) {
    matrix out;
    out.xsize = xsize;
    out.ysize = ysize;
    out.data = data;
    return out;
}

matrix operator+(matrix f_matrix, matrix s_matrix) {
    assert(f_matrix.xsize == s_matrix.xsize & f_matrix.ysize == s_matrix.ysize);
    int size = f_matrix.xsize * f_matrix.ysize;
    matrix out;
    out.xsize = f_matrix.xsize;
    out.ysize = f_matrix.ysize;
    out.data = new float[size];
    int i;
    for(i = 0; i < size; i++) {
        out.data[i] = f_matrix.data[i] + s_matrix.data[i];
    }
    return out;
}

matrix operator+(matrix f_matrix, float num) {
    int size = f_matrix.xsize * f_matrix.ysize;
    matrix out;
    out.xsize = f_matrix.xsize;
    out.ysize = f_matrix.ysize;
    out.data = new float[size];
    int i;
    for(i = 0; i < size; i++) {
        out.data[i] = f_matrix.data[i] + num;
    }
    return out;
}

matrix operator-(matrix f_matrix, matrix s_matrix) {
    assert(f_matrix.xsize == s_matrix.xsize & f_matrix.ysize == s_matrix.ysize);
    int size = f_matrix.xsize * f_matrix.ysize;
    matrix out;
    out.xsize = f_matrix.xsize;
    out.ysize = f_matrix.ysize;
    out.data = new float[size];
    int i;
    for(i = 0; i < size; i++) {
        out.data[i] = f_matrix.data[i] - s_matrix.data[i];
    }
    return out;
}

matrix operator-(matrix f_matrix, float num) {
    int size = f_matrix.xsize * f_matrix.ysize;
    matrix out;
    out.xsize = f_matrix.xsize;
    out.ysize = f_matrix.ysize;
    out.data = new float[size];
    int i;
    for(i = 0; i < size; i++) {
        out.data[i] = f_matrix.data[i] - num;
    }
    return out;
}

matrix operator*(matrix f_matrix, matrix s_matrix) {
    out.xsize = s_matrix.xsize;
    out.ysize = f_matrix.ysize;
    int size = out.xsize * out.ysize;
    int curs = 0;
    out.data = new float[size];
    while(curs < xsize) {
        for(int i=0; i<f_matrix.xsize; i++) {
            out.data[i] = f_matrix.data[i] * s_matrix.data[curs + i*s_matrix.xsize];
        }
    }
    return out;
}

matrix operator*(matrix f_matrix, float num) {
    int size = f_matrix.xsize * f_matrix.ysize;
    matrix out;
    out.xsize = f_matrix.xsize;
    out.ysize = f_matrix.ysize;
    out.data = new float[size];
    int i;
    for(i = 0; i < size; i++) {
        out.data[i] = f_matrix.data[i] * num;
    }
    return out;
}
