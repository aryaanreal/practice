// this is the function that checks a 10x10 matrix is identity or not
int is_identity(int array[10][10]) {
  for (int i = 0; i <10 ; i++){
    for (int j = 0; j <10 ; j++){
      //check main diagonal
      if (i == j ) {
        if (array[i][j] != 1) {
          return 0;  //not an identity matrix
        }
      }
      else {
        if (array[i][j] != 0){
          return 0; //not an identity matrix
        }
      }
    }
  }
  return 1; //if the matrix is identity
}