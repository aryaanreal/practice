//this is the main function for function-2-4
#include <iostream> 
int main() {
  bool is_ascending(int array[], int n);
  //example arrays
  int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size1 = sizeof(array1) / sizeof(array1[0]); //getting the size of array 1

  int array2[] = {2, 4, 6 , 7 , 9, 10};
  int size2 = sizeof(array2) / sizeof(array2[0]); //getting size of array 2

  int array3[] = {1, 2 , 5 ,2 ,3 , 4, 7, 8, 2};
  int size3 = sizeof(array3) / sizeof(array3[0]); //getting the size of  array 3

  int array4[] = {};
  int size4 = sizeof(array4) / sizeof(array4[0]); //getting the size of array 4

  int array5[] = {1};
  int size5 = sizeof(array5) / sizeof(array5[0]); //getting the size of array 5

  std::cout << std::boolalpha; //printing the bool as true or false
  std::cout << "Is array 1 ascending? " << is_ascending(array1, size1) <<std::endl;
  std::cout << "Is array 2 ascending? " << is_ascending(array2, size2) <<std::endl;
  std::cout << "Is array 3 ascending? " << is_ascending(array3, size3) <<std::endl;
  std::cout << "Is array 4 ascending? " << is_ascending(array4, size4) <<std::endl;
  std::cout << "Is array 5 ascending? " << is_ascending(array5, size5) <<std::endl;

  return 0;
}