//this is the function that checks if a given array is a palindrome and sums the elements


//this function checks if the array is a palindrome
bool is_palindrome(int integers[], int length) {
  if(length <= 0) return false;
  for (int i = 0; i < length /2; i++) {
    if (integers[i] != integers [length - 1 - i ]){
      return false;
    }
  }
  return true;
}


//this function sums the array elements
int sum_array_elements (int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++){
    sum += integers[i];
  }
  return sum;
}

//this is the function that starts the previous functions
int sum_if_palindrome(int integers[], int length) {
  if (length <= 0 ) return -1;
  if (is_palindrome(integers, length)) {
    return sum_array_elements(integers, length);
  }
  else {
    return -2;
  }
}

