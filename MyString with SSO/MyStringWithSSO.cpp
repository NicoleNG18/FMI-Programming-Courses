#include "BasicString.h"
#include <iostream>

int main() {
    BasicString a("Hello");
    std::cout << "String A: " << a.getString() << ", Size: " << a.getSize() << std::endl;

    BasicString b("This is a much longer string to test dynamic allocation.");
    std::cout << "String B: " << b.getString() << ", Size: " << b.getSize() << std::endl;

    BasicString c = a;
    std::cout << "String C (copy of A): " << c.getString() << ", Size: " << c.getSize() << std::endl;

    c = b;  
    std::cout << "String C (after assignment from B): " << c.getString() << ", Size: " << c.getSize() << std::endl;

    c.resize(10); 
    std::cout << "String C (after resizing to 10 chars): " << c.getString() << ", Size: " << c.getSize() << std::endl;

}
