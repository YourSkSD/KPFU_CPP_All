#include "example.hpp"

using std::cout;
using std::endl;

template <typename T>
void whatami(T&& x) {
	cout << " something undenstandable" << std::endl;
}

//template <typename T>
//void output(T x) {
//	cout << real(x) << imag(x) << endl;
//}

void whatami(...) {
	std::cout << "anything" << std::endl;
}

template <typename T>
T do_something(T x) {
	return(++x);
}

template<>
double do_something<double>(double x) {
	return(x / 2);
}

void whatami(int x) {
	std::cout << x << " type int" << std::endl;
}



void whatami(long x) {
	std::cout << x << " type long" << std::endl;
}

template <typename T>
void whatami(T* x) {
	std::cout << x << " pointer" << std::endl;
}

class C {};

void t_e1() {
	cout << "\ntest_example_1" << endl;
	auto int_num = do_something(5);
	auto double_num = do_something(5.0);
}

void t_e2() {
	cout << "\ntest_example_2" << endl;
	whatami(5);
	//whatami(5.0); несколько варинатов шаблонов => ошибка времени компиляции
}

void t_e3() {
	cout << "\ntest_example_3" << endl;
	int int_num = 15;
	whatami(int_num);
	whatami(&int_num);
}

void t_e4() {
	cout << "\ntest_example_4" << endl;
	C entity;
	whatami(entity);
	whatami(&entity);
}

void whatami(double x) {
	std::cout << x << " type double" << std::endl;
}

void t_e5() {
	cout << "\ntest_example_5" << endl;
	int int_num = 7;
	float double_num = 16.0;
	whatami(int_num);
	whatami(double_num); // преобразование float в double
}

void task() {
	t_e1();
	t_e2();
	t_e3();
	t_e4();
	t_e5();
}