cmake_minimum_required(VERSION 3.24)

project("Pet Grooming")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(dog_test src/dog.cpp tests/dog_test.cpp)
add_executable(main main.cpp src/dog.cpp src/store.cpp)
add_executable(store_test src/store.cpp src/dog.cpp tests/store_test.cpp)

target_link_libraries(dog_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(store_test PRIVATE Catch2::Catch2WithMain)
