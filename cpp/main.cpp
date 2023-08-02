#include <iostream>

#include "CppProject.hpp"

int main(void) {

    CppProject project;
    std::cout << project.sayHello() << std::endl;
    std::cout << project.computeFactorial(5) << std::endl;

    return 0;

}