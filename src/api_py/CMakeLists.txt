# path = root/src/api_py

include_directories ("${CMAKE_SOURCE_DIR}/include")

add_library (simple_api_python "${CMAKE_CURRENT_SOURCE_DIR}/api_python.cc")
target_link_libraries (simple_api_python simple_ast simple_api_c ${Boost_LIBRARIES})

