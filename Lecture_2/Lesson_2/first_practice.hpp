#ifndef __FIRST_PRACTICE_HPP
#define __FIRST_PRACTICE_HPP

#include <iostream>

class Complex {
public:
	double real, imag;
};

class Matrix {
public:
	Matrix(double m00, double m01, double m10, double m11);
	double m[2][2];
};

class Real {
public:
	double real;
};

template <typename T> 
int sign(T value) {
	return (T(0) <= value) - (value < T(0));
}

template <typename T>
double abs(T entity) {
	return sign(entity.real) * entity.real;
}

template <>
double abs<Matrix>(Matrix entity);

template <>
double abs<Complex>(Complex entity);

void f_p_t_1();

#endif /*__FIRST_PRACTICE_HPP*/