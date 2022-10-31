add_executable(app)

set_target_properties(app
    PROPERTIES
      OUTPUT_NAME app.exe)

target_sources(app
    PRIVATE
      main.cpp)

target_link_libraries(app
    PRIVATE
      dl
      shared)
