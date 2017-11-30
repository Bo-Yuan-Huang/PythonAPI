# path = root/src

# build libraries for all components
add_subdirectory (simple_ast)

include_directories ("${CMAKE_SOURCE_DIR}/include")

#file (GLOB TOP_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")
#add_library (simple_api ${TOP_SRC})

#add_executable (simple_api ${TOP_SRC})
set (EXTRA_LIBS ${EXTRA_LIBS} simple_ast)
#target_link_libraries (simple_api ${EXTRA_LIBS})

add_library (simple_api_c "${CMAKE_CURRENT_SOURCE_DIR}/api_top.cc")
target_link_libraries (simple_api_c ${EXTRA_LIBS})

add_library (simple_api_p "${CMAKE_CURRENT_SOURCE_DIR}/api_python.cc")
target_link_libraries (simple_api_p ${EXTRA_LIBS} simple_api_c)
