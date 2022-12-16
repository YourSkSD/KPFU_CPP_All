#include "third_practice.hpp"

void tests_third_practice::ttp_3_0() {
	Equation<double> d(0, 0, 0);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_1() {
	Equation<double> d(0, 0, 3);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_2() {
	Equation<double> d(0, 3, 0);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_3() {
	Equation<double> d(-3, 0, 0);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_4() {
	Equation<double> d(8, -3, -5);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_5() {
	Equation<double> d(1000, 10, 100);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_6() {
	Equation<double> d(-10, 10, -1);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_7() {
	Equation<double> d(0, 3, -3);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_8() {
	Equation<double> d(3, -3, 0);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_9() {
	Equation<double> d(3, 0, 3);
	d.solve();
	std::cout << std::endl;
}

void tests_third_practice::ttp_3_10() {
	Equation<double> d(-9, -3, -10);
	d.solve();
	std::cout << std::endl;
}

void func_third_practice() {
	using namespace tests_third_practice;
	ttp_3_0();
	ttp_3_1();
	ttp_3_2();
	ttp_3_3();
	ttp_3_4();
	ttp_3_5();
	ttp_3_6();
	ttp_3_7();
	ttp_3_8();
	ttp_3_9();
	ttp_3_10();
}