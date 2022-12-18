#include "example.hpp"

void pseudomain() {
    Stack<int*> s;
    s.push(new int{ 42 });
    cout << *s.top() << std::endl;
    delete s.pop();
    s.kwmek();
    Stack<int> qwer;
}