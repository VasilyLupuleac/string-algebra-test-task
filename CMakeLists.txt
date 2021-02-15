# CMakeList.txt: проект CMake для Palindromes; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)


set(SOURCE_EXE Main.cpp)

set(SOURCE_LIB Palindromes.cpp)	

add_library(palindromes STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main palindromes)	