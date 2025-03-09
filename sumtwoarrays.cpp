//this is the function that adds up to arrays
int sum_two_arrays(int firstArray[], int n , int secondArray[] ) {
  if (n <1) {
    return 0;
  }

  int sum = 0;  //intialising an empty variablle for sum

  for (int i = 0; i < n; i++) {
    sum+= firstArray[i] + secondArray[i]; //loop that sums up the first and second array and puts it in the sum variable

  }
  return sum;
}