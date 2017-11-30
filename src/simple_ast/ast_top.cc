// File: ast_top.cc
// Synopsis: source for the ast

#include "simple_ast/ast_top.h"
#include <cstdlib>

Node::Node() {}

Node::~Node() {}

void Node::SetVal(const int &val) { val_ = val; }

const int &Node::GetVal() const { return val_; }

void Node::IncrementVal() { val_++; }
