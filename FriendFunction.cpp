#include<iostream>
using namespace std;

class box{
    private: int length;
    public: friend int input(box);

};

int input(box b1){
    b1.length = 10;
    cout<<b1.length;
    return 0;
};

int main(){
    box b1;
    input(b1);
    return 0;
}