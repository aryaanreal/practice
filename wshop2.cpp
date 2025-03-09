#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    //given test case 
    int array1[5] = {4, 5, 6, 7, 8};
    std::cout << "The number of even numbers in array1 is: " << count(array1, 5) << std::endl;

    //extra test case 2
    int array2[6] = {1, 3, 5, 7, 9, 11};
    std::cout << "The number of even numbers in array2 is: " << count(array2, 6) << std::endl;

    //extra test case 3
    int array3[4] = {2, 4, 6, 8};
    std::cout << "The number of even numbers in array3 is: " << count(array3, 4) << std::endl;

    return 0;
}