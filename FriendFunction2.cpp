#include<iostream>
using namespace std;
class sample
{
    public:
    int a;
    int b;
    void setvalue(){
        a = 25;
        b = 40;
    }
friend float mean(sample s);
};
float mean(sample s){
    return float(s.a+s.b)/2.0;
}

int main(){
    sample x;
    x.setvalue();
    cout<<"Mean value ="<< mean(x)<<"\n";
    return 0;
}
