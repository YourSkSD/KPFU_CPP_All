#ifndef __TASK_HPP
#define __TASK_HPP

#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Complex {
public:
    double real, imag;
};

class Matrix {
public:
    Matrix();
    Matrix(double m00, double m01, double m10, double m11);
    double m[2][2];
};

class Real {
public:
    double real;
};


void test1();
#endif /*__TASK_HPP*/