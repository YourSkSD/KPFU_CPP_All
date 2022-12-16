#ifndef __SEC_PRACTICE_HPP
#define __SEC_PRACTICE_HPP

#include <iostream>
#include <string>

namespace tests_sec_practice {
	void tsp_2_0();
	void tsp_2_1();
	void tsp_2_2();
	void tsp_2_3();
	void tsp_2_4();
	void tsp_2_5();
};

void func_sec_practice();

template<typename T>
void print_sym(T sym) {
	std::cout << sym << ' ';
}

template<typename T>
void print_elem(T elem) {
	std::cout << "element is: " << elem << std::endl;
}

template<typename T1, typename T2, typename T3>
void iter(T1 *Array, T2 elems, T3 (*func)(T1 e)) {
	for (int i = 0; i < elems; i++) {
		(*func)(Array[i]);
	}
	std::cout << std::endl;
}

#endif /*__SEC_PRACTICE.HPP*/