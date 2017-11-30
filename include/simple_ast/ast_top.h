// File: ast_top.h
// Synopsis: header for the ast

#ifndef __AST_TOP_H__
#define __AST_TOP_H__

class Node {
public:
  Node();
  ~Node();
  void SetVal(const int &val);
  int GetVal() const;
  // const int &GetVal() const;
  void IncrementVal();

private:
  int val_;
};

#endif // __AST_TOP_H__

