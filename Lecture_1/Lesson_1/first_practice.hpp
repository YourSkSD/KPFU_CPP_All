#ifndef __FIRST_PRACTICE_HPP
#define __FIRST_PRACTICE_HPP

template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T max(T& a, T& b){
	T max_val = b;
	(b < a ? max_val = a);
	return max_val;
}

template<typename T>
T min(T& a, T& b) {
	T min_val = b;
	(b > a ? min_val = a);
	return min_val;
}

#endif /*__FIRST_PRACTICE.HPP*/