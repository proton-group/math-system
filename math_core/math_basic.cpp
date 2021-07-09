#include "math_basic.h"

int _factorial(int mult, int iter) {
    if(iter > 1) {
        return _factorial(mult * (iter-1), iter-1);
    }
    else{
        return mult;
    }
}

int factorial(int n) {
    return _factorial(1, n+1);
}

double m_e() {
    return 2,718281828459045;
}

double ln(double a){
    
}
