//this is the main function for function-2-3
#include <iostream>

int main() {

  void two_five_nine(int array[], int n, int& numTwo, int& numFive, int& numNine);

  int array[] = {2, 5, 2, 2, 5 ,6, 7, 8, 9, 9, 9, 2, 23, 5, 14 , 12 }; //example array
  int size = sizeof(array) / sizeof(array[0]);

  int numTwo;
  int numFive;
  int numNine;

  two_five_nine(array, size ,numTwo, numFive, numNine);

  std::cout <<"2:" << numTwo << ";5:" << numFive << ";9:" << numNine << '\n';

  return 0;

}
