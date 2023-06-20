/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
//template<class T1,class T2,class t3>
template<class T1,class T2>//T=TIPO GENREICO 2 tipi diversi
void scambio(T1& a, T2& b){
    
    T2 app;
    
    app=a;
    a=b;
    b=app;
}; 
int main()
{
    int a=5;
    string b="te";
    //float b=12.8;
    //int b=9;
    scambio(a,b);
  cout<<a<<" "<<b<<endl;
    return 0;
}

