// this is the function that checks if a given array is in ascending order
bool is_ascending(int array[], int n) {
  if(n < 1 ) {
    return false;       //if the array is empty returning false
  }

  //iterating through each array to see if it's ascending or not by comparing each element with the previous elememt.

  for(int i = 1 ;  i < n; i++){
    if (array[i] < array[i-1]){
      return false;
    }
  }

  //if the loop completes without finding anything wrong it returns true
  return true;
}