#ifndef __THIRD_PRACTICE.HPP
#define __THIRD_PRACTICE.HPP

#include <iostream>

namespace tests_third_practice {
	void ttp_3_0();
	void ttp_3_1();
	void ttp_3_2();
	void ttp_3_3();
	void ttp_3_4();
	void ttp_3_5();
	void ttp_3_6();
	void ttp_3_7();
	void ttp_3_8();
	void ttp_3_9();
	void ttp_3_10();
};

void func_third_practice();

const double epsilon = 1e-6;

template<typename T> 
int sing(T value) {
	return (T(0) <= value) - (value < T(0));
}


template<typename T>
class Equation{
	T a, b, c;
public:
	Equation(T a1, T b1, T c1);

	void solve();
};

template<typename T>
double sqrt(const T root) {
	double n = root / 2.;
	double bottom = 0.;
	while (n != botoom) {
		bottom = n;
		n = (n + root / 2) / 2.;
	}
	return n;
}

template<typename T>
bool zero(T value){
	return sing(value) * value < epsilon;
}


template<typename T>
Equation<T>::Equation(T a1, T b1, T c1):a(a1), b(b1), c(c1){};

template<typename T>
void Equation<T>::solve() {
	if (zero(a) && zero(b) && !zero(c)) {
		std::cout << "Корней нет" << std::endl;
		return;
	}
	else if (zero(a) && zero(b) && zero(c)) {
		std::cout << "Уравнение имеет бесконечно много решений" << std::endl;
		return;
	}
	else if (zero(a) && !zero(b)) {
		std::cout << "x1 = x2 = " << -c / b << std::endl;
		return;
	}
	else if (!zero(a) && !zero(b) && zero(c)) {
		std::cout << "x1 = 0" << std::endl;
		std::cout << "x2 = " << -b / a << std::endl;

		return;
	}

	T disc = b * b - 4 * a * c;

	if (zero(disc)) {
		std::cout << "x1 = x2 = " << -b / (2 * a) << std::endl;
		return;
	}
	else if (disc > 0) {
		double d = sqrt(disc);
		std::cout << "x1 = " << (-b + d) / (2 * a) << std::endl;
		std::cout << "x2 = " << (-b - d) / (2 * a) << std::endl;
		return;
	}
	else if (disc < 0) {
		double d = sqrt(-disc);
		std::cout << "x1 = " << -b / (2 * a) << " + i" << d/(2*a) << std::endl;
		std::cout << "x2 = " << -b / (2 * a) << " - i" << d/(2*a) << std::endl;
		return;
	}
	return;
}

#endif /*__THIRD_PRACTICE.HPP*/