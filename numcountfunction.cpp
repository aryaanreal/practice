//function to count the numbers that are same as the target

int numCount(int array[], int n , int number) {
  if (n < 1) {
    return 0;
  }

  int count = 0;  //intialising count

  for (int i =0; i < n; i++){
    if (array[i] ==  number) {
      count++;
    }
  }
  return count;
}