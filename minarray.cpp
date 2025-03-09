// this is a function that finds the smallest value in a given array
int min_element(int array[], int n) {
  if(n<1) {
    return 0;
  }

  int minimum = array[0];  // first making the first element of array as the minimum then comparing it with the other elements to find the actual smallest

  for(int i = 1; i < n; i++) {
    if(array[i] < minimum) {
      minimum = array[i];
    }
  }
  return minimum;
}