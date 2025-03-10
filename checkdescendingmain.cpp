//this is the main function for function-2-5
#include <iostream> 
int main() {
  bool is_descending(int array[], int n);
  //example arrays
  int array1[] = {10, 9 , 8 , 7 , 6, 5 ,4 , 3 , 2, 1};
  int size1 = sizeof(array1) / sizeof(array1[0]); //getting the size of array 1

  int array2[] = {10, 9 ,7 ,5, 3, 2, 1};
  int size2 = sizeof(array2) / sizeof(array2[0]); //getting size of array 2

  int array3[] = {1, 2 , 5 ,2 ,3 , 4, 7, 8, 2};
  int size3 = sizeof(array3) / sizeof(array3[0]); //getting the size of  array 3

  int array4[] = {};
  int size4 = sizeof(array4) / sizeof(array4[0]); //getting the size of array 4

  int array5[] = {1};
  int size5 = sizeof(array5) / sizeof(array5[0]); //getting the size of array 5

  std::cout << std::boolalpha; //printing the bool as true or false
  std::cout << "Is array 1 descending? " << is_descending(array1, size1) <<std::endl;
  std::cout << "Is array 2 descending? " << is_descending(array2, size2) <<std::endl;
  std::cout << "Is array 3 descending? " << is_descending(array3, size3) <<std::endl;
  std::cout << "Is array 4 descending? " << is_descending(array4, size4) <<std::endl;
  std::cout << "Is array 5 descending? " << is_descending(array5, size5) <<std::endl;

  return 0;
}