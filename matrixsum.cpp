// this is the function that sums up the main diagonal in an array 

int sum_diagonal(int array[4][4]) {
  int sum = 0; //making an empty variable for sum
  for (int i = 0; i < 4 ; i++) {
    sum += array[i][i];  //adding elements with the same row and col index

  }
  return sum;
}