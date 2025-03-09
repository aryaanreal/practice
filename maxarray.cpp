// this is a function that finds the biggest value in a given array
int max_element(int array[], int n) {
  if(n<1) {
    return 0;
  }

  int maximum = array[0];  // first making the first element of array as the minimum then comparing it with the other elements to find the actual smallest

  for(int i = 1; i < n; i++) {
    if(array[i] > maximum) {
      maximum = array[i];
    }
  }
  return maximum;
}