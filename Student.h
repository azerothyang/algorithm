//
// Created by Administrator on 2017/11/8.
//

#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H

#include "string"
using namespace std;
class Student {
public:
    string name;
    int score;
    friend bool operator > (const Student& student,const Student &otherStudent);
    friend bool operator <(const Student &student,const Student &otherStudent);
    friend ostream& operator<<(ostream &os, const Student &student);
};


#endif //ALGORITHM_STUDENT_H
