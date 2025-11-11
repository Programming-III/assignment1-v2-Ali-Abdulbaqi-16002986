#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

Person :: Person(string name, string id){
this->name = name;
this->id = id;
}
Person :: Person(){
}

void Person :: display() {
cout << "Name: " << name << endl;
cout << "id: " << id << endl;
}

Student :: Student(int yearLevel, string major){
this->yearLevel = yearLevel;
this->major = major;
}

Student :: Student(){
}

void Student :: display(){
cout << "year level: " << yearLevel << endl;
cout << "major: " << major << endl;
}





Instructor :: Instructor(string department, int experienceYears){
this->department = department;
this->experienceYears = experienceYears;
}

Instructor :: Instructor(){
}

void Instructor :: display(){
cout << "department: " << department << endl;
cout << "experience years: " << experienceYears << endl;




Course :: Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents){
this->courseCode = courseCode;
this->courseName = courseName;
this->maxStudents = maxStudents;
this->students = students;
this->currentStudents = currentStudents;
}

Course :: Course(){
}

void Course :: addStudent(const Student& s){

}
void Course :: displayCourseInfo(){
cout << "course Code: " << courseCode << endl;
cout << "course Name: " << courseName << endl;
cout << "max Students: " << maxStudents << endl;
cout << "major: " << major << endl;
cout << "year level: " << yearLevel << endl;
cout << "major: " << major << endl;






// ==================== Main Function ====================
int main() {
   Course c("101", "CS101 - Introduction to Programming", 3, "Omar Nabil (ID: 2202)", 2);
   Instructor i("Computer Science", 5);
   Student s(2, "Informatics");
    
    return 0;
}
