#include <iostream>
int main () {
  int n;
  std::cout <<"Please enter an integer: ";
  std::cin>>n;
  std::cout << std::hex << n << '\n';  
  return 0;
}