#include <iostream>
using namespace std;

class student{
    public:
    char Name[10];
    int Roll_no;
    char Dept[10];
    char course[10];

void input(){
    cout<<"\n|* Enter the details of the students *|\n\n";
    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Roll number: ";
    cin>>Roll_no;
    cout<<"Enter Department: ";
    cin>>Dept;
    cout<<"Enter Course: ";
    cin>>course;
}
void display(){
    cout<<"\n|* Displaying the student details *|\n\n";
    cout<<"Name of the student is: "<<Name<<endl;
    cout<<"Roll number of the student is: "<<Roll_no<<endl;
    cout<<"Department of the student is: "<<Dept<<endl;
    cout<<"Course of the student is: "<<course<<endl;
}
};

int main(){
    student s;
    s.input();
    s.display();
    return 0;
}