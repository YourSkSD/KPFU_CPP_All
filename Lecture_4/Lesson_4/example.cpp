#include "example.hpp"
#include <string>
#include <iostream>

void zad4_0() {

    using is = Stack<int>;//������������� ����������
    is ints;
    Stack<string> ss;
    ints.push(5);

    cout << ints.top() << endl;
    ss.push("hello");
    cout << ss.top() << endl;
    ss.pop();
    Stack<int> msi1[10];//����� �� ���� ��� ���
    is msi2[20];
    Stack<float*> FloatPtrStack;
    Stack<Stack<int>> intStackStack;//��������� ������ ������������� �����


    Stack<pair<int, int>>ps;
    ps.push({ 2,4 });
    ps.push({ 3,6 });
    cout << ps.top().first << endl;//��� ���������
    cout << ps.top().second << endl;

    ints.push(43);
    ints.push(23);
    ints.printOn(cout);//��� ���� ����������

    //ps.printOn(cout); //not ok!
};