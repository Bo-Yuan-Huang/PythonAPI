// File: api_python.cc
// Synopsis: source for wrapping python api

#include "api_top.h"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(simple_api_python) {
  boost::python::def("IncrementNode", IncrementNode);
}

