#include "second_practice.hpp"

template <>
double normalize<Vec_two_dim>(Vec_two_dim* entity) {
    double meth_pifagor = sign(entity->v[0]) * entity->v[0] > sign(entity->v[1]) * entity->v[1] ? entity->v[0] : entity->v[1];
    cout << "(Vec_two_dim *entity) " << meth_pifagor << endl;
    return meth_pifagor;
}

template <>
double normalize<Matrix>(Matrix entity) {
    double n_mat = entity.m[0][0] + entity.m[0][1] + entity.m[1][0] + entity.m[1][1];
    cout << "normalize<Matrix>(Matrix entity) = " << n_mat << endl;
    return n_mat;
}

template <>
double normalize<Matrix>(Matrix* entity) {
    double pointer_n_mat = sqrt(entity->m[0][0] + entity->m[0][1] + entity->m[1][0] + entity->m[1][1]);
    cout << "normalize<Matrix>(Matrix entity) = " << pointer_n_mat << endl;
    return pointer_n_mat;
}

void s_p_t_1() {
    Matrix m(7, 9, -7, -3);
    Vec_one_dim vect_1;
    Vec_two_dim vect_2;
    Vec_tree_dim vect_3;

    normalize(m);
    normalize(&m);
    normalize(vect_1);
    normalize(&vect_1);
    normalize(vect_2);
    normalize(&vect_2);
    normalize(vect_3);
    normalize(&vect_3);
}