/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
template<class A> 
void scambio(A& op1, A& op2){
    A c;
    c=op1;
    op1=op2;
    op2=c;
};


int main()
{
   
   string op1="salve!!";
   string op2="prof";
   scambio(op1,op2);
   cout<<op1<<" "<<op2<<endl;
    

    return 0;
}
