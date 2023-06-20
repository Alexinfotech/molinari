#include<iostream>
#include<stdlib.h>
#include<ctime>
#include"stack.h" 
#include<string>
//#include<sstream>//stream per cqmbio tipo
#include<cstdio>
#include <stdio.h>
using namespace std;
 
 int main(){
    int *v;//-------------------------------------------puntatore dimensione
    FILE *fp_out;//-------------------------------------puntatore file scrittura
    FILE *fp_in;//--------------------------------------puntatore file lettura
    int dato;//-----------------------------------puntatore numeri aggiunti al file con fopen puntatore FP_out
   //tringstream change;//------------------------------cambio TIPO char int
    int i;
     
    v = NULL;
    fp_out = NULL;//------------------------------------dichiaro null puntatore file flusso in uscita 
    fp_in=NULL;//---------------------------------------dichiaro null puntatore file flusso in entrata 
    srand(time(NULL));
    int dim = rand()%10 + 10;
    
    fp_out=fopen("ARRAY.txt","w");//-------------------------apertura fluss area file per scrittura uso puntatore flusso in uscita
    v = new int[dim];//---------------------------------dichiarazione puntatore dimensione
    for(int i = 0; i < dim; i++){*(v + i) = rand()%100;}
    for(int i=0;i < dim;i++){fprintf(fp_out,"%d\n",*(v+i));} //-------------stampa nel file il risultato del puntatore+indice ciclo for rand
                
    //cout << " " << *(v+i);//visualizzazione numeri generati prima della creazione del file
    fclose(fp_out);//-------------------------------------chiusura canale connessione file
    
    lista testaPari = NULL;//---------------------------dichiaro null puntatori testa lista pari e dispari e indice lista pari e dispari
    lista testaDispari = NULL;//------""--
    lista indPari = NULL;//----------""--
    lista indDispari = NULL;//-------""--
    //////////////////////////puntatori gestione coda
    lista codaPari=NULL;
    lista codaDispari=NULL;
    lista indCodaPari=NULL;
    lista indCodaDispari=NULL;
    //////////////////////////
    int numero, condizione;
    int contaPari = 0;//--------------""--
    int contaDispari = 0;//-----------------------------azzeramento 
    
    fp_in=fopen("ARRAY.txt","r");
        cout<<"ARRAY.TXT NON AGGIORNATO CON IL PROGRAMMA IN ESECUZIONE"<<endl;
        cout<<"I numeri contenuti nel file sono:"<<endl;
    
    //cout<<"numeri contenuti nel file flussIN.txt--";-----------------------stampa a monitor dati letti da file
    //fprintf(stdin,"%s",val);//---------------------------------------------stampa file flussoIN
    
    while
        (!feof(fp_in)){fscanf(fp_in,"%d ",&dato);
       cout<<dato<<" ";
       
       //change<<dato;//-------------------------------------lista dichiarata int quindi cambio dato da char a int 
       //change>>number;//-----------------""--
                if(dato %2 == 0)
                { 
                    push(testaPari, dato);
                    contaPari++;
                }
            else
                {
                    push(testaDispari, dato);
                    contaDispari++;
                }
        }
    cout<<"\n\nREGOLA ASSEGNATA ALLE LISTE\n\n  Il flusso dati dal file ha generato: "<<endl;
    cout<<"Lista numeri pari: "<<endl;
    print_list(testaPari, indPari);
    cout<<"\nLista numeri dispari: "<<endl;
    print_list(testaDispari, indDispari);
    fclose
        (fp_in);
     void menu();   
        
   char scelta;
   //char rietra;
 
         do {
    menu();
    //cout<<"iserisci una scelta[1-3]:";
            cin>>scelta;
            switch(scelta) {
case '1':
{
    cout<<"\n    HAI SCELTO LA REGOLA DI ESTRAZIONE STACK"<<endl;
    popCoda(codaPari, indCoda);
    cout<<"\nLISTA PARI AGGIORNATA\n";
    print_listPopPost(testaPari, ind);
    popDispari(testaDispari, indDispari);
    cout<<"\nLISTA DISPARI AGGIORNTA\n";
    print_listPopPost(testaDispari, indDispari);
} 
      break;
    case '2':  
    
      break;
    default:
                cout<<"Hai fatti un inserimento sbagliato."<<endl;
}
}while(scelta != '2');
return 0;
}
void menu(){
    cout<<"-----MENU' PRINCIPALE---------"<<endl;
    cout<<"1) pop stack"<<endl;
    cout<<"2)Esci per vedere il file txt aggiornato"<<endl;
return ;      
}
