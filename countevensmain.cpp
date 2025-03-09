//this is the main function of function-1-5
#include <iostream>

int main(){

  int count_evens(int n);

  int number;
  std::cout << "What is the last number: "; //taking the input for the last digit
  std::cin >> number;
  int result = count_evens(number);

  std::cout << "The number of even numbers between 1 and " << number << " is: " << result << std::endl;

  return 0;

}