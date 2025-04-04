#include <iostream>

// This is a cool "Hello, World!".

int *allocateAnInt() { return new int(0); }

int main() {
    std::cout << "Hello, C++!\n";
    return 0;
}
