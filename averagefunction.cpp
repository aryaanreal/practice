//function to calculate the average of a given array
double array_mean(int array[], int n) {
  //if the given number n is less than 1 returning 0.0

  if (n < 1) {
    return 0.0;
  }

  //calculating the mean
  int sum = 0; //initialising empty variable for sum
  for (int i=0 ; i<n; i++) {  //establishing for loop to get the sum
    sum += array[i];
  }

  double average = double(sum) / n; //getting the average

  return average;
}