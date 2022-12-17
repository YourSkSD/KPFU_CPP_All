#include "example.hpp"

using std::cout;
using std::endl;
using std::string;

template<typename t1, typename t2>
auto max(t1 a, t2 b) {
    cout << "The 1st template is used" << endl;
    return (b < a ? a : b);
}


template<typename rt, typename t1, typename t2>
rt max(t1 a, t2 b) {
    cout << "The 2nd template is used" << endl;
    return (b < a ? a : b);
}


void f_e_1() {
    auto a = ::max(4, 7.2);
    auto b = ::max<long double>(4, 7.2);
    //auto c = ::max<int>(4,7.2); //ошибка оба соотвествуют
}

template<typename t>
t max(t a, t b) {
    cout << "max<T> ()" << endl;
    return (b < a ? a : b);
}


template<typename t>
t* max(t* a, t* b) {
    cout << "2222" << endl;
    return (*b < *a ? a : b);
}


char const* max(char const* a, char const* b) {
    cout << "3333" << endl;
    return strcmp(b, a) < 0 ? a : b;
}


void f_e_2() {
    int a = 7;
    int b = 42;
    auto m1 = ::max(a, b);

    string s1 = "hey";
    string s2 = "you";
    //auto m2 = ::max(s1, s2);

    int* p1 = &b;
    int* p2 = &a;
    auto m3 = ::max(p1, p2);

    char const* str1 = "hello";
    char const* str2 = "world";
    auto m4 = ::max(str1, str2);

}

template<typename t>
t const& max(t const& a, t const& b) {
    cout << "&&&" << endl;
    return (b < a ? a : b);
}


template<typename t>
t const& max(t const& a, t const& b, t const& c) {
    cout << "3&" << endl;
    return (max(max(a, b), c));
}


void f_e_3() {
    // auto m1 = ::max(7,42,68);
    char const* s1 = "ivan";
    char const* s2 = "petr";
    char const* s3 = "anton";
    //auto m2 = ::max(s1,s2,s3);//ошибка
}


template<typename t>
t max(t a, t b, t c) {
    cout << "The 1st template is used" << endl;
    return max(max(a, b), c);
}


int max(int a, int b) {
    cout << "max(int,int)" << endl;
    return (b < a ? a : b);
}

void f_e_4() {
    //::max(47,11,13);
}

/*
template<typename t1, typename t2>
constexpr auto max(t1 a, t2 b) {
    cout << "The 1st template is used" << endl;
    return (b < a ? a : b);
}
void f_e_5(){
    int a[::max(sizeof(char),1000u)];
}
*/


void func_example(){
    f_e_1();
    f_e_2();
    f_e_3();
    f_e_4();
    //   f_e_5();
}