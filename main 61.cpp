/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;
void menu();

int main(){

    char scelta;
    do{
    menu();
    cout<<"iserisci una scelta[1-4]:";
    cin>>scelta;
    switch(scelta){
        case '1':
        system("pause");
        break;
        case '2':
        system("pause");
        break;
        case '3':
        return 0;
        
        break;
        default:
        system("pause");
    }
}while(scelta!='4');
return 0;
}

void menu(){
    system("cls");
    cout<<"-----INTERFACCIA AMENU'---------"<<endl;
    cout<<"1) funzionalità uno"<<endl;
    cout<<"2) funzionalità due"<<endl;
    cout<<"3) Esci"<<endl;


    return ;
}

