#include <iostream>

int main() {

  int numCount(int array[], int n , int number);

  int array[] = {1, 2 , 3, 4 , 2 , 2, 6 , 7}; //example array
  int size = sizeof(array) / sizeof(array[0]);  //finding the size of the array
  int target = 2; //the target number to find in the array

  int result = numCount(array, size, target);

  std::cout << "The number of elements equal to " << target << " is: " << result << std::endl; //printing out the result
  return 0;
}