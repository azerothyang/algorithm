//
// Created by Administrator on 2017/11/8.
//

#include "Student.h"

bool Student::operator<(const Student &otherStudent) {
    return score < otherStudent.score;
}