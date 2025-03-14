#include <string>
#include <iostream>

void print_binary_str(std::string decimal_number){
  int num = std::stoi(decimal_number);
  std::string binary;
  while(num >0) {
    binary = (num % 2 == 0 ? "0" : "1") + binary;
    num /= 2;
  }
  std::cout << binary << std::endl;
}