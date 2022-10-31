add_library(plugin MODULE)

target_sources(plugin
    PRIVATE
      src/plugin.cpp)

target_include_directories(plugin
    PUBLIC
      include/
    PRIVATE
      include/plugin/
      src/)

target_link_libraries(plugin
    PRIVATE
      shared)
