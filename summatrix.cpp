//this function sums up two 3x3 matrices
#include <iostream>
void print_summed(int array1[3][3],int array2[3][3]) {
  for (int i = 0; i <3 ; i++){
    for (int j = 0; j < 3; j++){
      //adding the two matrices
      std::cout << array1[i][j] + array2[i][j];

      //adding spaces in between
      if (j < 2){
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}