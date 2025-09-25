#include <iostream>

#include "src/hello.hpp"
#include "src/stringFinder.h"

int main() {
  std::cout << hello() << std::endl;
  std::cout << stringFinder("hello", 'l') << std::endl;
  std::cout << stringFinder("hello","ell") << std::endl;
}
