#include <iostream>
//this is a function that finds the minimum and maximum valuye of a given array of integers and returns the sum
int array_min (int integers[], int length) {
  if (length <= 0) return -1;
  int min_val = integers[0];  //assuming that the first element is the minimum
  for(int i = 1; i < length; i++){  //iterate through the array to find if the current min value is larger than any other eleement
    if (integers[i] < min_val){
      min_val = integers[i];
    }
  }
  return min_val;
}

//doing the same thing to find the max value

int array_max(int integers[], int length) {
  if (length <= 0) return -1;
  int max_val = integers[0];
  for (int i = 1 ; i < length; i++) {
    if(integers[i] > max_val){
      max_val = integers[i];
    }
  }
  return max_val;
}

//function to calculate the min and max
int sum_min_max (int integers[], int length) {
  if (length <= 0) return -1;
  int min_val = array_min (integers, length);
  int max_val = array_max (integers, length);
  int sum = max_val + min_val;
  return sum;
}