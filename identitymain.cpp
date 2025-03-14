// this is the main function for the function that finds out if the matrix is identity
#include <iostream>

int main() {
  int is_identity(int array[10][10]);

  int matrix[10][10] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
  };

  int result = is_identity(matrix);

  //outputting the result based on if result returns 1 or 0
  if (result == 1) {
    std::cout << "The matrix is an identity matrix." << std::endl;
  }
  else {
    std::cout << "The matrix is not an identity matrix." <<std::endl;
  }

  return 0;

}