#include <iostream>

int main() {
    int value = 42;   // A normal integer variable
    int* ptr = &value; // A pointer that holds the address of 'value'

    std::cout << "Value: " << value << std::endl;          // Outputs: Value: 42
    std::cout << "Pointer (ptr): " << ptr << std::endl;    // Outputs: Address of value
    std::cout << "Dereferenced ptr: " << *ptr << std::endl;// Outputs: 42

    std::cout << "Address of ptr (&ptr): " << &ptr << std::endl; // Outputs: Address of ptr

    return 0;
}
