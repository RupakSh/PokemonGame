#include <iostream>
#include <string>
using namespace std;


class A {
public:
    A() { std::cout << "A's Constructor\n"; }
    ~A() { std::cout << "A's Destructor\n"; }
};

class B : public A {
public:
    B() { std::cout << "B's Constructor\n"; }
    ~B() { std::cout << "B's Destructor\n"; }
};

int main() {
    B obj;
    return 0;
}