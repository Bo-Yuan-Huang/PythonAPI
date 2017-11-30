# path = root/src

# build libraries for all components
add_subdirectory (simple_ast)

include_directories ("${CMAKE_SOURCE_DIR}/include")

file (GLOB TOP_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")

add_library (simple_api ${TOP_SRC})

#add_executable (simple_api ${TOP_SRC})
set (EXTRA_LIBS ${EXTRA_LIBS} simple_ast)
target_link_libraries (simple_api ${EXTRA_LIBS})
