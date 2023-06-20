/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
struct Scambio {
  int num;
  string str;
};

void scambioValues(Scambio &a, Scambio &b) {
  Scambio temp = a;
  a = b;
  b = temp;
}

int main() {
  Scambio a, b;
  a.num = 10;
  a.str = "hello";
  b.num = 20;
  b.str = "world";
  
  cout << "Scambio:\n";
  cout << "a.num = " << a.num << "; a.str = " << a.str << endl;
  cout << "b.num = " << b.num << "; b.str = " << b.str << endl;
 scambioValues(a, b);
  
  cout << "Scambio:\n";
  cout << "a.num = " << a.num << "; a.str = " << a.str << endl;
  cout << "b.num = " << b.num << "; b.str = " << b.str << endl;
  
  return 0;
}
