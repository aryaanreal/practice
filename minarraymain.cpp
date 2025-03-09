//the main function for function-2-1

#include <iostream>

int main() {

  int min_element(int array[], int n);

  int array[] = {5, 6, 7, 8, 2, 1, 3, 4, 9, 6};  //example array
  int size = sizeof(array) / sizeof(array[0]);  //finding out the size of the array 

  int result = min_element(array, size);
  std::cout << "The smallest element in this array is: " << result << std::endl;

  return 0;

}
