/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
template <class T>
class C{
    public:
    T prova;
    C(T a): prova(a) {cout <<prova<<endl;};
    
   void stampa();//{cout<<endl<<++prova;}
};
template <class T>

void C <T>::stampa() {cout<<endl<<++prova;};


int main()
{
    C<int>c(5);
    C<float> d(12.5);
    
    c.stampa();
    d.stampa();
    
    printf("\nHello World");

    return 0;
}


