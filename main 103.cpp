/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
template <class T>
class C{
public:
T prova;
C(T a): prova(a) {cout<<prova<<endl;};
//void C stampa() {cout<<endl<<++prova;};da usare dentro
void stampa();
    
};
template <class T>
void C<T>::stampa() {cout<<endl<<++prova;};
int main()
{
    C<int>c(5);
    C<float>d(12.8);
    C<string>f("ciao");
    //cout<<"Hello World";
    c.stampa();
    d.stampa();
    return 0;
}
