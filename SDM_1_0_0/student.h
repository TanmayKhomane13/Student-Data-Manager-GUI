#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student {
    public:
        std::string name{};
        int roll{};
        std::string stuClass{};
        std::string div{};
        int p{}, c{}, m{};
        int total{};
};

#endif // STUDENT_H
