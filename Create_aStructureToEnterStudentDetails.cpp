#include<iostream>
using namespace std;

struct Employee {
char name[50];
int rollno;
float dob;
char branch[50];
char marks[50];
};

int main()
{
    Employee s;
    cout << "Enter information," << endl;
    cout << "|Enter Name|: ";
    cin >> s.name;
    cout << "|Enter Roll Number|: ";
    cin >> s.rollno;
    cout << "|Enter Date of Birth|: ";
    cin >> s.dob;
    cout << "|Enter Branch|: ";
    cin >> s.branch;
    cout << "|Enter Marks|: ";
    cin >> s.marks;
    return 0;
}