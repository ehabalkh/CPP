#include <iostream>

void populateArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = i * 2;  // Just an example of initializing array elements
    }
}

void printArray(const int* array, int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Dynamically allocate memory for an array of integers
    int* array = new int[size];

    // Populate the array using a function
    populateArray(array, size);

    // Output the array using a function
    printArray(array, size);
    std::cin >> size;
    printArray(array, 9);
    // Deallocate the memory
    delete[] array;

    return 0;
}
