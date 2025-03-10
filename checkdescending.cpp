// this is the function that checks if a given array is in descending order
bool is_descending(int array[], int n) {
  if(n < 1 ) {
    return false;       //if the array is empty returning false
  }

  //iterating through each array to see if it's descending or not by comparing each element with the previous elememt.
  //i starts with 1 as to compare with the previous element [0]
  for(int i = 1 ;  i < n; i++){
    if (array[i] > array[i-1]){
      return false;
    }
  }

  //if the loop completes without finding anything wrong it returns true
  return true;
}