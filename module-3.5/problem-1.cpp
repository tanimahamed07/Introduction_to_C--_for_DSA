// Question: Create three static objects with the help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his/her name.




#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    Student a, b, c;

    // First Student
    cin.getline(a.name, 100);
    cin >> a.roll >> a.section >> a.math_marks >> a.cls;
    cin.ignore();

    // Second Student
    cin.getline(b.name, 100);
    cin >> b.roll >> b.section >> b.math_marks >> b.cls;
    cin.ignore();

    // Third Student
    cin.getline(c.name, 100);
    cin >> c.roll >> c.section >> c.math_marks >> c.cls;


    if (a.math_marks >= b.math_marks && a.math_marks >= c.math_marks)
    {
        cout << a.name << endl;
    }
    else if (b.math_marks >= a.math_marks && b.math_marks >= c.math_marks)
    {
        cout << b.name << endl;
    }
    else
    {
        cout << c.name << endl;
    }

    return 0;
}
