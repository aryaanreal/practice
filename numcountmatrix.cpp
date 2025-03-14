#include <iostream>

void count_digits(int array[4][4]) {
  //initializing an array that storees countrs for digits 0-9

  int counts[10] = {0};   //empty array named count

  //iterating through the matrix and count the ocurences of each digit
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++){
      int digit = array[i][j];
      if (digit >= 0 && digit <= 9){          //making sure the digit is withtin 0 to 9
        counts[digit]++;
      }
    }
  }

  //printing the result
  for (int i = 0; i < 10; ++i) {
    std::cout << i << ":" << counts[i] << ";";
}

  std::cout << std::endl;

}