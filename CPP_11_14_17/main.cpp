#include <iostream>


namespace A::B::C {
    int i;
}

int main() {
    A::B::C::i = 42;
    std::cout << "nested namepace"<<std::endl;
    return 0;
}