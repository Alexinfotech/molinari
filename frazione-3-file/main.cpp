#include <iostream>
#include <ctime> // libreria srand rand
#include "frazione.h"
//#include <stdlib.h> // lireria system cls (dos)
#define  dim 4

//using namespace std; usa l'usig in frazion.h
void menu();

int main()
{

    char scelta;
    do{
    menu();
    cout<<"\aiserisci una scelta[1-3]:";
    cin>>scelta;
    switch(scelta){
    case '1':
    {
    //prima frazione
    frazione f1;
    cout << "\a\tINSERISCI IL NUMERATORE DELLA TUA PRIMA FRAZIONE\n";
    int newNum;
    cin >> newNum;
    f1.setNum(newNum);
    f1.stampa();
    cout << "\a\n\tINSERISCI IL DENOMINATORE DELLA TUA PRIMA FRAZIONE\t\n          !!!!---ATTENZIONE NON DEVE ESSER ZERO---!!!!\n";
    int newDen;
    cin >> newDen;
    f1.setDen(newDen);                                                      
    cout << "\a     (((PRIMA FRAZIONE INSERITA)))\n\t\t";
    f1.stampa();
    //seconda frazione
    frazione f2;
    cout << "\n\n\a\tINSERISCI IL NUMERATORE DELLA TUA SECONDA FRAZIONE\n";
    int newNum2;
    cin >> newNum;
    f2.setNum(newNum);
    f2.stampa();
    cout << "\a\n\t    INSERISCI IL DENOMINATORE DELLA TUA SECONDA FRAZIONE\t\n         !!!!---ATTENZIONE NON DEVE ESSER ZERO---!!!!\n";
    int newDen2;
    cin >> newDen;
    f2.setDen(newDen);
    cout << "\n    (((SECONDA FRAZIONE INSERITA)))\n\t\t";
    f2.stampa();
    //operazioni matematica
    frazione ris = f1+f2; 
    ris.stampa();                                        
    ris = f1-f2;
    ris.stampa();
    ris = f1*f2;
    ris.stampa();
    ris = f1/f2;
    ris.stampa();
    // confronto
    (f1>f2);
    {if(f1>f2)
    cout<<"\nla prima frazione inserita è maggiore";
    else
    cout<<"\nla prima frazione inserita è minore";
    }
        }
        system("pause");
        break;
        case '2':
        {
     srand(time(NULL));                           //
        int a[dim];                               //
            for(int i =0; i < dim; i++)           //GENERATORE FRAZIONE 
{                                                 //
        a[i] = rand()%10 + 1;                     //
        
}
        cout<<"a[0] = "<<a[0]<<endl<<"a[1] = "<<a[1]<<endl<<"a[2] = "<<a[2]<<endl<<"a[3] = "<<a[3];
        cout<<endl<<"PRIMA FRAZIONE casuale \a"<<a[0]<<"/"<<a[1]<<endl<<"SECONDA FRAZIONE casuale: \a"<<a[2]<<"/"<<a[3];

    frazione f1(a[0],a[1]);
    frazione f2(a[2],a[3]);
    //operazioni matematica
    frazione ris = f1+f2; 
    ris.stampa(); 
    f1>f2;
    ris = f1-f2;
    ris.stampa();
    ris = f1*f2;
    ris.stampa();
    ris = f1/f2;
    ris.stampa();
    // confronto
    if(f1>f2)
    cout<<"\nLA PRIMA FRAZIONE è MAGGIORE";
    else
    cout<<"\nLA PRIMA FRAZIONE è MINORE";}
        system("pause");
        break;
        
        case '3'://comando esci
        return 0;
        break;
        default://comando sbagliato
        cout<<"\n\n--------------ATTENZIONE SCELTA SBAGLIATA--------------\n\a\a\a\a\a ";
        system("pause");
    }
}while(scelta!='3');
return 0;
}

void menu(){
   // system("cls");// comnado dos libreria (include <stdlib.h>)
    cout<<"\n-----INTERFACCIA A MENU'---------\n\a"<<endl;
    cout<<"1) inserisci frazione da tastiera"<<endl;
    cout<<"2) generatore casuale di frazioni "<<endl;
    cout<<"3) Esci";


    return ;
}


