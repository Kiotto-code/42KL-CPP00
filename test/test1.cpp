#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
  int num = 1234;
  std::string str;
  stringstream temp("asdsa");

  // set the output field width to 10

  // output the number
  // std::cout << std::setw(10);

  std::cin >> str;
  std::cout << std::setw(10) << num  << std::endl;
  std::cout << std::setw(10) << str.substr(0,5).put('?') << std::endl;
  puts(temp.str().c_str());

  return 0;
}
