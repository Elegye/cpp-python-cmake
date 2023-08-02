#include "CppProject.hpp"

std::string CppProject::sayHello() const {
    return "Hello !";
}

std::uint64_t CppProject::computeFactorial(std::uint16_t n) const {
    return n == 0 ? 1 : n * computeFactorial(n-1);
}