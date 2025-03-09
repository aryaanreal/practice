//this is the main function for function-2-2
#include <iostream>

int main () {

  int max_element(int array[], int n);

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 22, 12};
  int size = sizeof(array) / sizeof(array[0]);

  int result = max_element(array, size);

  std::cout << "The largest number in the array is: " << result << std::endl;

  return 0;
}