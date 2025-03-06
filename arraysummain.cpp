// this is the main program that will give the inputs to the function previous

#include <iostream>

int arraysum(int arr[], int n);

int main(){
  int arr[] = {1, 2, 3, 4, 5}; //example array
  int size = sizeof(arr) / sizeof(arr[0]); // using the sizeof function to determine the byte amount in the array
                                          // using the sizeof one array to find out the number of elements present
                                          
  int result = arraysum(arr, size);

  std::cout << "Sum of array elements: " << result << '\n';

  return 0;

}