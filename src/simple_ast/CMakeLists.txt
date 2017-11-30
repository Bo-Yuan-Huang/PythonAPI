# path = root/src/simple_ast

include_directories ("${CMAKE_SOURCE_DIR}/include")

file (GLOB AST_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")
add_library (simple_ast ${AST_SRC})

