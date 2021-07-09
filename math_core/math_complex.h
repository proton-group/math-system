#ifndef MATH_COMPLEX_H
#define MATH_COMPLEX_H

typedef struct {
    float rm;
    float lm;
} complex;

complex set(float rm, float lm);
complex operator+(complex num1, complex num2);
complex operator+(complex num1, float num2);
complex operator-(complex num1, complex num2);
complex operator-(complex num1, float num2);
complex operator*(complex num1, complex num2);
complex operator*(complex num1, float num2);
complex pow(complex num1, float num2);
complex pow(complex num1, complex num2);

#endif