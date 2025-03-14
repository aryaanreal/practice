//this is the main for function-2-3
#include <iostream>

int main() {

  int sum_if_palindrome(int integers[], int length);

  int integers[] = {1, 2, 3, 2, 1};
  int length = 5;
  std::cout << sum_if_palindrome(integers, length) << std::endl;
  return 0;
}