// this is the function that checks if the array is a fan array or not
bool is_fanarray(int array[], int n) {
  if (n < 1 ) {
    return false;
  }

  for (int i = 0; i < n/2; i++) {     //The first loop iterates through the first half of the array and compares each element with its corresponding element from the end of the array.
      if (array[i] != array[n-1-i]){
        return false;               //this checks if the first elements are equal to the other pair of elements
      }
  }

  for (int i = 1; i < (n + 1) / 2; i++) {         //check if the array is in ascending order
    if (array[i] < array[i - 1]) {
        return false;
    }
  }

  return true;     //if every condition is true then return true

}