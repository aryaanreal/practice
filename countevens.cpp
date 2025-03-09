// function that counts even numbers in a given range
int count_evens(int n) {
  if (n < 1) {
    return 0;       //returning to 0 if the input is invalid
  }

  int count = 0; //making an empty variable for count

  for (int i = 1; i <=n; i++) {  //starting the loop to find the even numbers
    if (i % 2 == 0) {
      count++;
    }
  }
  return count;
}