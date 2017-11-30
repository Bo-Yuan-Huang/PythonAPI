// File: api_top.cc
// Synopsis: source for the api

#include "simple_ast/ast_top.h"
#include <cstdlib>
#include <iostream>

int IncreMentNode(const int &val) {
  Node container;
  container.SetVal(val);
  container.IncrementVal();
  int output = container.GetVal();

  std::cout << output << std::endl;

  return output;
}

int main() {
  int test_input = 1;
  int test_output = 0;

  test_output = IncreMentNode(test_input);

  std::cout << "Increment " << test_input << " is " << test_output << std::endl;

  return 0;
}
