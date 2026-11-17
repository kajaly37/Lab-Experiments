#include <iostream>
#include <string>

using namespace std;


class Person {
protected:
    string name;

public:
    void getPersonDetails() {
        cout << "Enter Name=" << endl;
        cin >> name;
    }

    void displayPersonDetails() {
        cout << name << endl;
    }
};


class Student : public Person {
protected:
    int rollNumber;
    string course;

public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter Roll Number=" << endl;
        cin >> rollNumber;
        cout << "Enter course=" << endl;
        cin >> course;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << rollNumber << endl;
        cout << course << endl;
    }
};


class GraduateStudent : public Student {
private:
    string specialization;

public:
    void getGraduateDetails() {
        getStudentDetails();
        cout << "Enter your specialization=" << endl;
        cin >> specialization;
    }

    void displayGraduateDetails() {
        displayStudentDetails();
        cout << specialization << endl;
    }
};

int main() {
    GraduateStudent gs;
    
   
    gs.getGraduateDetails();
    
    
    gs.displayGraduateDetails();

    return 0;
}