// File: test1.cc
// Synopsis: source for testing CMake test

#include "api_top.h"
#include <cstdlib>
#include <iostream>

int main() {
  int test_input = 1;
  int test_output = 0;

  test_output = IncrementNode(test_input);

  std::cout << "Increment " << test_input << " is " << test_output << std::endl;

  return 0;
}
