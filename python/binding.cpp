#include <pybind11/pybind11.h>

#include "CppProject.hpp"

namespace py = pybind11;

PYBIND11_MODULE(PyCppProject, m) {
    py::class_<CppProject>(m, "CppProject")
        .def("sayHello", &CppProject::sayHello)
        .def("computeFactorial", &CppProject::computeFactorial);
}