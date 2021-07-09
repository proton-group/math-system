complex set(float rm, float lm) {
    complex out;
    out.rm = rm;
    out.lm = lm;
    return out;
}

complex operator+(complex num1, complex num2) {
    complex out;
    out.rm = num1.rm + num2.rm;
    out.lm = num1.lm + num2.lm;
    return out;
}

complex operator+(complex num1, float num2) {
    complex out;
    out.rm = num1.rm + num2;
    out.lm = num1.lm;
    return out;
}

complex operator-(complex num1, complex num2) {
    complex out;
    out.rm = num1.rm - num2.rm;
    out.lm = num1.lm - num2.lm;
    return out;
}

complex operator*(complex num1, complex num2) {
    complex out;
    // (a+bi) * (c+di) = 
    out.rm = num1.rm * num2.rm - num1.lm * num2.lm;
    out.lm = num1.rm * num2.lm + num2.rm * num1.lm;
    return out;
}

complex operator*(complex num1, float num2) {
    complex out;
    out.rm = num1.rm * num2;
    out.lm = num1.lm * num2;
    return out; 
}

complex pow(complex num1, complex num2) {
    complex buf;
}