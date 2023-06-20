#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    int a;
    string b;
    
    A(int x): a(x), b(" io sono una stringa della class A "){cout<<" <-io sono il nonno->"<<endl;};
    
   
};
class B: public A{ 
    public:
   
    B(int x): A::A(x){
            
        };
    };

class C: public B{
    public:
    
       C(int x): B::B(x){
            
       };
    
};

int main()
{
   
    C c(55555);
    cout<<c.a<<endl<<c.b<<endl;
   return 0;
}



