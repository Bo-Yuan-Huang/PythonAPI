// File: api_top.cc
// Synopsis: source for the api

#include "api_top.h"
#include <cstdlib>
#include <iostream>

int IncrementNode(const int &val) {
  Node container;
  container.SetVal(val);
  container.IncrementVal();
  int output = container.GetVal();

  std::cout << "C api print " << output << std::endl;

  return output;
}

int main() {
  int test_input = 1;
  int test_output = 0;

  test_output = IncrementNode(test_input);

  std::cout << "Increment " << test_input << " is " << test_output << std::endl;

  return 0;
}
