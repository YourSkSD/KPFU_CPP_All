#include "first_practice.hpp"

using std::cout;
using std::endl;

Matrix::Matrix(double m00, double m01, double m10, double m11) {
	m[0][0] = m00;
	m[0][1] = m01;
	m[1][0] = m10;
	m[1][1] = m11;
};

template <>
double abs<Matrix>(Matrix entity) {
	return (entity.m[0][0] * entity.m[1][1] - entity.m[0][1] * entity.m[1][1]);
}

template <>
double abs<Complex>(Complex entity) {
	return (entity.real* entity.real + entity.imag* entity.imag);
}

void f_p_t_1() {
	Matrix matrix(3, -2, 5, 6);
	Complex compl_entity = { -9, 3 };
	Real real_num = { -20 };
	cout << "Real = " << abs(real_num) << endl;
	cout << "Complex = " << abs(compl_entity) << endl;
	cout << "Matrix = " << abs(matrix) << endl;
}