#include <iostream>

#include "src/hello.hpp"
#include "src/stringFinder.h"

int main() {
  std::cout << hello() << std::endl;
  std::cout << stringFinder("hello", 'l') << std::endl;
  std::cout << stringFinder("hello","ell") << std::endl;
  std::cout << stringFinder("The quick brown fox", "quiet") << std::endl;
  std::cout << stringFinder("The quick brown fox", 'e', true, 1) << std::endl;
  //detailed tests in test file.
}
