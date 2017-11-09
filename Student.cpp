//
// Created by Administrator on 2017/11/8.
//

#include <iostream>
#include "Student.h"

bool operator > (const Student &student, const Student &otherStudent) {
    return student.score > otherStudent.score;
}

bool operator < (const Student &student, const Student &otherStudent) {
    return student.score < otherStudent.score;
}

ostream& operator<<(ostream &os, const Student &student){
    return os<<"Student: "<<student.name<<" "<< student.score <<endl;
}
