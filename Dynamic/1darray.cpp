#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* dynamicArray = new int[size];

    // Access and modify elements of the dynamic array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    // Print the elements of the dynamic array
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }

    // Don't forget to deallocate the memory
    delete[] dynamicArray;

    return 0;
}

or

//----------------------------------------------
int* dynamicArray; // Declare pointer

int size;
std::cout << "Enter the size of the array: ";
std::cin >> size;

dynamicArray = new int[size]; // Allocate memory

// ----------------------------------------------
or
// to make a array of size 10
std::array<int, 10> array;
