

set(
    SOURCES
    "CppProject.hpp"
    "CppProject.cpp"
)

add_library(
    cpp_project_lib
    ${SOURCES}
)

add_executable(
    cpp_project
    "main.cpp"
)

target_link_libraries(cpp_project PRIVATE cpp_project_lib)

add_subdirectory(${CMAKE_SOURCE_DIR}/extern/pybind11)
pybind11_add_module(_core binding.cpp)