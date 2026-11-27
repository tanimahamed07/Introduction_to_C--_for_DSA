#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student tanim(2, 5, 5.00);
    Student *p = &tanim;

    return p;
}

int main()
{

    Student *p = fun();
    Student *karim = new Student(10, 5, 4.55);

    cout << (*p).roll << " " << p->cls << " " << p->gpa << endl;
    cout << (*karim).roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}