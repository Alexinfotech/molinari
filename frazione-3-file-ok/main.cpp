#include <iostream>
#include <ctime> // libreria srand rand
//#include <conio.h>
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
        cout<<"\ainserisci una scelta[1-4]:";
            cin>>scelta;
    switch(scelta){
    
    
  //////////////////////////////////////////////////////////////// PRIMA SCELTA inserimento tastiera  
    
    
    
                         case '1':
    {
     // prima frazione da tastiera
    frazione f1;
                cout << "\a\tINSERISCI IL NUMERATORE DELLA TUA PRIMA FRAZIONE\n";
    int newNum; cin >> newNum; f1.setNum(newNum); f1.stampa();//numeratore
                cout << "\a\n\tINSERISCI IL DENOMINATORE DELLA TUA PRIMA FRAZIONE\t\n          !!!!---ATTENZIONE NON DEVE ESSER ZERO---!!!!\n";
    int newDen; cin >> newDen; f1.setDen(newDen);// denominatore                                                 
            cout << "\a     (((PRIMA FRAZIONE INSERITA)))\n\t\t"; f1.stampa();
    // seconda frazione da tastiera
    frazione f2;
                cout << "\n\n\a\tINSERISCI IL NUMERATORE DELLA TUA SECONDA FRAZIONE\n";
    int newNum2; cin >> newNum; f2.setNum(newNum); f2.stampa();//numeratore
                cout << "\a\n\t    INSERISCI IL DENOMINATORE DELLA TUA SECONDA FRAZIONE\t\n         !!!!---ATTENZIONE NON DEVE ESSER ZERO---!!!!\n";
    int newDen2; cin >> newDen; f2.setDen(newDen);//denominatore
                cout << "\n    (((SECONDA FRAZIONE INSERITA)))\n\t\t"; f2.stampa();
    
    //operazioni matematica
    frazione ris = f1+f2; ris.stampa(); //f1 prima frazione/f2 seconda frazione
    ris = f1-f2; ris.stampa();
    ris = f1*f2; ris.stampa();
    ris = f1/f2; ris.stampa();
    // confronto
    (f1>f2); {if(f1>f2)
                cout<<"\nla prima frazione inserita è maggiore";
    else
                cout<<"\nla prima frazione inserita è minore";}
    }
    system("pause"); break;
    
    
   /////////////////////////////////////////////////////SECONDA SCELTA generatore casale 
    
                               case '2':{
    srand(time(NULL));                  //
        int a[dim];                     //
            for(int i =0; i < dim; i++) //GENERATORE FRAZIONE CASUALE
    {                                       //
            a[i] = rand()%10 + 1;       //               
        
    }

    frazione f1;//
    frazione f2;//
    cout<<"a[0] = "<<a[0]<<endl<<"a[1] = "<<a[1]<<endl<<"a[2] = "<<a[2]<<endl<<"a[3] = "<<a[3];
    f1.setNum(a[0]); 
    f1.setDen(a[1]);
    cout << "\a     (((PRIMA FRAZIONE INSERITA)))\n\t\t"; f1.stampa();
    f2.setNum(a[2]);
    f2.setDen(a[3]);
    cout << "\n    (((SECONDA FRAZIONE INSERITA)))\n\t\t"; f2.stampa();
       

    
    //operazioni matematica
    frazione ris = f1+f2; ris.stampa(); //f1 prima frazione/f2 seconda frazione
    ris = f1-f2; ris.stampa();
    ris = f1*f2; ris.stampa();
    ris = f1/f2; ris.stampa();
    // confronto
    f1>f2; if(f1>f2)
            cout<<"\nla prima frazione inserita è maggiore";
    else
        cout<<"\nla prima frazione inserita è minore";}
        system("pause");
        break;
        
        
 ///////////////////////////////////////////////////////terza scelta trova numeri primi     
        
        
        case '3':
    {
        //DICHIARAZIONE DELLE VARIABILI
    int n;
    int resto;
    int cont;
    cout<<"CALCOLO NUMERI PRIMI MINORI DI N"<<endl<<endl;
    //INPUT DI N COMPRESO TRA 1 E 1000
    do
    {
    cout<<"Inserire n (MAX 10000000): ";
    cin>>n;
    }
    while(n<1 || n>10000000);
    cout<<endl<<"I numeri primi da 1 a "<<n<<" sono:";
    for(int k=1;k<=n;k++)
    {
     cont=0;
    for(int f=1;f<=k;f++)
    {
    resto=k%f;
    if(resto==0)cont++;
    }
    if(cont<3)
    {
    if(k==n)cout<<k<<".";
    else cout<<k<<", ";
    }
    }
    cout<<endl<<endl<<"FINE..."<<endl<<endl;

    } 
        
    
    system("pause");
    break;
        
        
        
        case '4'://comando esci
        return 0;
        break;
        
        default://comando sbagliato
        cout<<"\n\n--------------ATTENZIONE SCELTA SBAGLIATA--------------\n\a\a\a\a\a ";
        system("pause");
    }
    }while(scelta!='4');
    return 0;
}
void menu(){
   // system("cls");// comnado dos libreria (include <stdlib.h>)
    cout<<"\n-----INTERFACCIA A MENU'---------\n\a"<<endl;
    cout<<"1) Questo simpatico programma somma sottrae divide moltiplica"<<endl;
    cout<<"   confronta e semplifica le frazioni e non  tiene conto "<<endl;
    cout<<"   del denominatore se è uno"<<endl;
    cout<<"   Inserisci frazione da tastiera"<<endl<<endl;
    cout<<"2) Generatore casuale di frazioni,come il programma precedente,"<<endl;
    cout<<"   ma genera le frazioni automaticamente,noi programmatori"<<endl;;  
    cout<<"   usiamo questa funzione per testare i programmi per generare"<<endl;
    cout<<"   eventuali errori ed assicurarci il buon funzionamento "<<endl<<endl;
    cout<<"3) Contatore numeri primi partendo da 1 in loop "<<endl<<endl;
    cout<<"4) Esci\n";
return ;
}
//

