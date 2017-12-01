# path = test/test1

file(GLOB TST_SRCS *.cc)

ADD_EXECUTABLE(test1 ${TST_SRCS})

TARGET_LINK_LIBRARIES(test1 simple_api_c)

add_test(NAME test1 COMMAND test1)
  #WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/test_binary)
