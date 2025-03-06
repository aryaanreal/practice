// function to sum all elements in an array

int arraysum(int arr[], int n){
  if(n<1){
    return 0;
  }

  int sum = 0; //declaring sum as an empty variable

  for (int i = 0; i < n; i++) {   //establishing for loop
    sum+= arr[i];
  }

  return sum;

}
