#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float maths,english,hindi;
    float marks_obtained;
    float percentage;
};

int main() 
{
    struct student s[10];
    for(int i = 0; i < 10; ++i){
    cout << "\nEnter Information," << endl;
    cout << "\nEnter Name: ";
    cin >> s[i].name;
    cout << "Enter Roll number: ";
    cin >> s[i].roll;
    cout << "Enter Marks of Maths, English and Hindi: ";
    cin >> s[i].maths >> s[i].english >> s[i].hindi;

    s[i].marks_obtained = s[i].maths + s[i].english + s[i].hindi;
    int total_marks = 300;
    s[i].percentage = (s[i].marks_obtained/total_marks)*100;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s[i].name << endl;
    cout << "Roll: " << s[i].roll << endl;
    cout << "Percentage: " << s[i].percentage << endl << endl;
    }
    return 0;
}