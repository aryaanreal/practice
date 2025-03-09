// Function to count the number of even numbers in an array
int count(int array[], int n) {
  // If the size parameter n is less than 1, return 0
  if (n < 1) {
      return 0;
  }

  //making a counter for even numbers
  int evenCount = 0;

  // Iterate through the array and count even numbers
  for (int i = 0; i < n; i++) {
      if (array[i] % 2 == 0) { // Check if the number is even
          evenCount++;
      }
  }

  return evenCount; 
}