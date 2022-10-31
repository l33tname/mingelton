add_library(shared SHARED)

target_sources(shared
    PRIVATE
      src/ConcreteSingleton.cpp
      src/Simpleton.cpp)

target_include_directories(shared
    PUBLIC
      include/
    PRIVATE
      include/shared/
      src/)

target_compile_options(shared
    PUBLIC
      -std=c++17)
