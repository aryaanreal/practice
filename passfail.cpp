//function to find if a grade passes or fails
#include <iostream>
void print_pass_fail(char grade) {
  switch(grade) {   //making switch cases to check for pass or fail
      case 'A':
      case 'B':
      case 'C':
        std::cout << "Pass" << std::endl; // Grades A B and C passes
        break;
      case 'D':
      case 'E':
        std::cout << "Fail" << std::endl; //grades D and E are fail
        break;
      default:
        std::cout << "Nothing" << std::endl; //prints out nothing for invalid inputs
        break;

  }
}