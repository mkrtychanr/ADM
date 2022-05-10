add_library(onList onlist.h onlist.cpp)
add_library(onArray onarray.h onarray.cpp)
add_executable(pr3 main.cpp)
target_link_libraries(pr3 onList onArray)