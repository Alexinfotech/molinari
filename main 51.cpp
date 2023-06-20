
#include <iostream>
#include <string>
using namespace std;
template<class T>//T=TIPO GENREICO
void scambio(T& op1, T& op2,T& op3,T& op4){
    T a;
    a=op1;// a=appoggio
    op1=op2;
    op2=a;
    a=op3;
    op3=op4;
    op4=a;
};


int main()
{
   
   string op1="vist";
   string op2="te";
   string op3="bravo";
   string op4="che";
   scambio(op1,op2,op3,op4);
   cout<<op1<<" "<<op2<<" "<<op3<<" "<<op4<<endl;
    

    return 0;
}

