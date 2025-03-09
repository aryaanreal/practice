#include <iostream>

int main() {

  double array_mean(int array[], int n);
  
  int array[] = {1,2,3,4,5}; //example array
  int size = sizeof(array) / sizeof(array[0]); //using the sizeof function to determine the byte size of the array and then determining the element count of said array

  double mean = array_mean(array, size);
  std::cout <<"The average is: " << mean << '\n';

  return 0;


}