#include "sec_practice.hpp"
#include <string>


void tests_sec_practice::tsp_2_0() {
	std::cout << std::endl << "string" << std::endl;
	std::string line[] = { "123", "456", "789", "1011", "ababy", "adobe" };
	void (*point)(std::string line);
	point = print_sym<std::string>;
	iter(line, 6, point);
}

void tests_sec_practice::tsp_2_1() {
	std::cout << std::endl << "double" << std::endl;
	double d_line[] = { 0.01, 1., 2., 3., 4., 6., 8.778684 };
	void (*point)(double d_line);
	point = print_sym<double>;
	iter(d_line, 7, point);
}

void tests_sec_practice::tsp_2_2() {
	std::cout << std::endl << "string" << std::endl;
	std::string line[] = {"123", "456", "789", "1011", "ababy", "adobe"};
	void (*point)(std::string line);
	point = print_elem<std::string>;
	iter(line, 4, point);
}


void tests_sec_practice::tsp_2_3() {
	std::cout << std::endl << "string" << std::endl;
	std::string line[] = { "123", "456", "789", "1011", "ababy", "adobe" };
	void (*point)(std::string line);
	point = print_elem<std::string>;
	iter(line, 6, point);
}

void tests_sec_practice::tsp_2_4() {
	std::cout << std::endl << "double" << std::endl;
	double d_line[] = { 0.01, 1., 2., 3., 4., 6., 8.778684 };
	void (*point)(double d_line);
	point = print_sym<double>;
	iter(d_line, 0, point);
}

void tests_sec_practice::tsp_2_5() {
	std::cout << std::endl << "int" << std::endl;
	int i_line[] = { 3, 6, 78, 23};
	void (*point)(int i_line);
	point = print_sym<int>;
	iter(i_line, 4, point);
}

void func_sec_practice() {
	using namespace tests_sec_practice;
	tsp_2_0();
	tsp_2_1();
	tsp_2_2();
	tsp_2_3();
	tsp_2_4();
	tsp_2_5();
}