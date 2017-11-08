//
// Created by Administrator on 2017/11/8.
//

#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H

#include "string"

class Student {
public:
    std::string name;
    int score;
    bool operator<(const Student &otherStudent);
};


#endif //ALGORITHM_STUDENT_H
