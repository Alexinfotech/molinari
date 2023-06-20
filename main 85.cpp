/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int*** p;
   
       
       p = new int**;
      *p= new int*;
     **p= new int;
   
    //**P=new int;
    ***p=5;
    cout<<p<<" "<<*p<<" "<<**p<<" "<<***p<<" Hello World";

    return 0;
}

