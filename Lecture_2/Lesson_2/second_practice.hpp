#ifndef __SECOND_PACICE_HPP
#define __SECOND_PACICE_HPP

#include "first_practice.hpp"
#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

class Vec_one_dim {
public:
	double v[1] = { 7 };
	static const int size = 1;
};

class Vec_two_dim {
public:
	double v[2] = { 12, 13 };
	static const int size = 2;
};

class Vec_tree_dim {
public:
	double v[3] = {11,22, 33 };
	static const int size = 3;
};

template <typename T>
double normalize(T entity) {
	double obj = 0.;
	for (int i = 0; i < entity.size; i++) {
		obj += entity.v[i] * entity.v[i];
	}
	obj = sqrt(obj);
	cout << "normalize(T entity)_evklid = " << obj << endl;
	return obj;
}

template <typename T>
double normalize(T *entity) {
	double p_entity = 0.;
	for (int i = 0; i < entity->size; i++) {
		p_entity += sign(entity->v[i]) * entity->v[i];
	}
	p_entity = sqrt(p_entity);
	cout << "normalize(T entity)_manhat = " << p_entity << endl;
	return p_entity;
}

template <>
double normalize<Vec_two_dim>(Vec_two_dim* entity);

template <>
double normalize<Matrix>(Matrix entity);

template <>
double normalize<Matrix>(Matrix* entity);

void s_p_t_1();

#endif /*__SECOND_PACICE_HPP*/