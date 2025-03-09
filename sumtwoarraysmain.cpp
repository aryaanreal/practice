// main function of the sum of two arrays function
#include <iostream>

int main(){

  int sum_two_arrays(int firstArray[], int n , int secondArray[] );

  int firstArray[] = {1, 2, 3, 4, 5};
  int secondArray[] = {6, 7, 8, 9, 10};
  int size = sizeof(firstArray) / sizeof(firstArray[0]);  //using only the first array to find out the size as the question mentions both the arrays are supposed to be the same size

  int result = sum_two_arrays(firstArray, size, secondArray);
  std::cout << "The sum of the two arrays is: " << result << std::endl;



  return 0;
}