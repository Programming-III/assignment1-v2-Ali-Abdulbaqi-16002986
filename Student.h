#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
#using namespace std;
class Student :: public Person{
private:
int yearLevel;
string major;
public:
void display();
};
#endif
