#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    int a;
    
    A(): a(56), z(" io sono una stringa protected class A "),p(" stringa privata\n") {cout<<a<<" <-sono il padre\n"<<z<<p<<endl;};
    
    public:
    string z;
    private:
    string p;
};
class B: public A{ 
    public:
    B(){
    }
};
class C: public B{
    public:
    C(){
    }
};

int main()
{
    cout<<"CLASS A\n";
    A a1;
    cout<<"CLASS B\n";
    B b1;
    cout<<"CLASS C\n";
    C c1;
    cout<<"MAIN\n";
}


