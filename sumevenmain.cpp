#include <iostream>


int main() {

    //declaring the function
    double sum_even(double array[], int n);


    //example arrays
    double array1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size1 = sizeof(array1) / sizeof(array1[0]); //finding the size of array1

    double array2[] = {10.5, 20.5, 30.5, 40.5}; 
    int size2 = sizeof(array2) / sizeof(array2[0]); //finding the size of array 2

    double array3[] = {}; // Empty array
    int size3 = sizeof(array3) / sizeof(array3[0]); //finding the size of array 3

    //printing out the sum
    std::cout << "Sum of even positions in the first array: " << sum_even(array1, size1) << std::endl;
    std::cout << "Sum of even positions in the second array: " << sum_even(array2, size2) << std::endl;
    std::cout << "Sum of even positions in the third array: " << sum_even(array3, size3) << std::endl;

    return 0;
}