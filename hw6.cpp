////////////////////////  HW6   /////////////////////////
#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include <iomanip>
//////////////////////// part 2 /////////////////////////
std::ostream & endll (std::ostream & os) {return os << "\n\n" << std::flush;}
///////////////////////// main //////////////////////////
int main (int argc, const char** argv) {
//////////////////////// part 1 /////////////////////////
  int number;
  std::cout << "Part 1 \n" << "Enter integer number: ";

  while (!(std::cin >> number) || (std::cin.peek() != '\n')) {
    std::cin.clear();
    while (std::cin.get() != '\n');
    std::cout << "Try again\n";
}

  std::cout << "You have entered: " << number << endll;
  
  std::cout << "Part 2" << endll;
  std::cout << "Test line (must be 1 tile lower because of endLL)" << std::endl;
  
return 0;

}
