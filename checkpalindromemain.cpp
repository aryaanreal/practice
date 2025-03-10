//this is the main function for function-3-1

#include <iostream>



int main() {

  bool is_fanarray(int array[], int n);         //declare the function

    //example array
    
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {2, 4, 4, 2};
    int array3[] = {1, 2, 1, 2, 1};
    int array4[] = {1, 3, 5, 4, 2};
    int array5[] = {};

    std::cout << std::boolalpha;        //doing this makes this print out true and false instead of 1 or 0
    std::cout << "Is the first array a fan array? " << is_fanarray(array1, 5) << std::endl;
    std::cout << "Is the second array a fan array? " << is_fanarray(array2, 4) << std::endl;
    std::cout << "Is the third array a fan array? " << is_fanarray(array3, 5) << std::endl;
    std::cout << "Is the fourth array a fan array? " << is_fanarray(array4, 5) << std::endl;
    std::cout << "Is fifth array a fan array? " << is_fanarray(array5, 0) << std::endl;

    return 0;
}