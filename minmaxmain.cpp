#include <iostream>

int main () {
  int sum_min_max (int integers[], int length);

  // Example array
  int integers[] = {3, 1, 4, 1, 5, 9};
  int length = 6;

  int result = sum_min_max(integers, length);

  std::cout << "Sum of min and max: " << result << std::endl;

  return 0;
}