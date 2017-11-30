// File: api_python.cc
// Synopsis: source for wrapping python api

#include "api_top.h"
#include "simple_ast/ast_top.h"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(libsimple_api_python) {
  boost::python::def("IncrementNode", IncrementNode);

  boost::python::class_<Node>("Node")
      .def("SetVal", &Node::SetVal)
      .def("IncrementVal", &Node::IncrementVal)
      .add_property("GetVal", &Node::GetVal);
}

