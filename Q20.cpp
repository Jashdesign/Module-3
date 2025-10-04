#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int grade;

public:
    void setGrade(int g) {
        grade = g;
    }

    void showStudent() {
        cout << "\nStudent Details:" << endl;
        displayData();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    void setSubject(string sub) {
        subject = sub;
    }

    void showTeacher() {
        cout << "\nTeacher Details:" << endl;
        displayData();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Vishal", 20);
    s1.setGrade(12);
    s1.showStudent();

    Teacher t1;
    t1.setData("Kavya", 40);
    t1.setSubject("Mathematics");
    t1.showTeacher();

    return 0;
}