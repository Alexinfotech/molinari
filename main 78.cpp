/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
using namespace std;


int main() {
    
    srand(time(0));
    cout<<"Targa auto generata in modo casuale"<<endl;
    cout <<"\t\t"<<char('A' + rand() % 26);
    cout << char('A' + rand() % 26);
    cout << char('0' + rand() % 10);
    cout << char('0' + rand() % 10);
    cout << char('0' + rand() % 10);
    cout << char('A' + rand() % 26);
    cout << char('A' + rand() % 26);
}
