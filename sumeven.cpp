//this is the function that adds up the elements in the even position
double sum_even(double array[], int n) {
  if (n<1) {
    return 0;
  }

  double sum = 0;   //make an empty container for sum

  //iterate through the array and sum elements in even position. By sorting through every second element
  for (int i = 0; i <n ; i+=2) {
    sum += array[i];
  }

  return sum;

}