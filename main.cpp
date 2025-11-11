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

void Person :: display() {
cout << "Name: " << name << endl;
cout << "id: " << id << endl;
}

Student :: Student(int yearLevel, string major){
this->yearLevel = yearLevel;
this->major = major;
}

void Student :: display(){
cout << "year level: " << yearLevel << endl;
cout << "major: " << major << endl;
}





// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
