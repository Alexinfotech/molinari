#include <iostream>

using namespace std;

class A
    {
        public:
            int a;
            A(int n): a(n) {cout<<"SONO IL NONNO"<<endl;};
    };

class B: public A
    {
        public:
            int b;
            B(int n): A::A(n), b(20) {cout<<endl<<"SONO IL PADRE"<<endl;};
    };

class C: public B 
    {
        public:
            int c;
            C(int n): B::B(n), c(13) {cout<<endl<<"SONO IL FIGLIO";};
    };

int main()
{
    C c(5);

    cout<<endl<<endl<<c.a<<" "<<c.b<<" "<<c.c;
    
    return 0;
}