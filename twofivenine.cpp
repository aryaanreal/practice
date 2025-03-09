// this is a function that counts how many times the number two five nine appear

void two_five_nine(int array[], int n, int& numTwo, int& numFive, int& numNine) {
  //initializing counters

  numTwo = 0;
  numFive = 0;
  numNine = 0;

  //counting the times 2, 5, 9 appear
  for (int i = 0 ; i < n; i++) {
    switch (array[i]){
    case 2:
          numTwo++;
      break;
    case 5:
          numFive++;
      break;
    case 9:
          numNine++;
      break;
    default:
      break;
    }
  }
}