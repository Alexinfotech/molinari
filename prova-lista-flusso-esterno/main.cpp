#include<iostream>
#include<stdlib.h>
#include<ctime>
#include"stack.h" 
#include<string>
//#include<sstream>
#include<cstdio>
using namespace std;

 int main(){
    
    int *v;//-------------------------------------------puntatore dimensione
    FILE *fp_out;//-------------------------------------puntatore file scrittura
    FILE *fp_in;//--------------------------------------puntatorepuntatore file lettura
    int dato;//-----------------------------------puntatorepuntatorenumeri aggiunti al file con fopen puntatore FP_out
   // stringstream change;//------------------------------puntatorepuntatorenumericambio char int
    int number, i;
     
    v = NULL;
    fp_out = NULL;//------------------------------------dichiaro null puntatore file flusso in uscita 
    fp_in=NULL;//---------------------------------------dichiaro null puntatore file flusso in entrata 
    srand(time(NULL));
    int dim = rand()%10 + 10;
     
    
    fp_out=fopen
        ("flussoIN.txt","w");//-------------------------apertura fluss area file per scrittura uso puntatore flusso in uscita
    v = new int[dim];//---------------------------------dichiarazione puntatore dimensione
    for(int i = 0; i < dim; i++){*(v + i) = rand()%100;}
    for(int i=0;i < dim;i++)
                {
          fprintf  
                (fp_out,"%d\n",*(v+i)); //-------------stampa nel file il risultato del puntatore+indice ciclo for rand
                }
    //cout << " " << *(v+i);//visualizzazione contenuto arrey
    fclose
        (fp_out);//-------------------------------------chiusura canale connessione file
    
    lista testaPari = NULL;//---------------------------dichiaro null puntatori testa lista pari e dispari e indice lista pari e dispari
    lista testaDispari = NULL;//------""--
    lista tempPari = NULL;//----------""--
    lista tempDispari = NULL;//-------""--
    int numero, condizione;
    int contaPari = 0;//--------------""--
    int contaDispari = 0;//-----------------------------azzeramento 
    fp_in=fopen
        ("flussoIN.txt","r");
        //while
      //  (feof(fp_in));//-------------------------apertura fluss file lettura uso puntatore flusso in entrata
    //fscanf(dato,255,fp_in);      
        
        
    //fscanf
       //(fp_in,"%s",dato);//----------------------------lettura dati stringa da file
     
    //change<<dato;//-------------------------------------lista dichiarata int quindi cambio dato da char a int 
    //change>>number;//-----------------""--
    
    //cout<<"numeri contenuti nel file flussIN.txt--";-----------------------stampa a monito dati letti da file
    //fprintf(stdin,"%s",val);//---------------------------------------------stampa file flussoIN
    
    //for(int i = 0; i < number  ; i++)
    cout<<"I numeri contenuti nel file sono:"<<endl;
     while
        (!feof(fp_in)){
             fscanf
       (fp_in,"%d ",&dato);
       
       cout<<dato<<" ";
       
       //change<<dato;//-------------------------------------lista dichiarata int quindi cambio dato da char a int 
       //change>>number;
        
    
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
    //cout<<"\nREGOLA STACK ASSEGNATO ALLE LISTE"<<endl;
    cout<<"\nLista numeri pari: "<<endl;
    print_list(testaPari, tempPari);
    cout<<"\nLista numeri dispari: "<<endl;
    print_list(testaDispari, tempPari);
    fclose
        (fp_in);
return 0;
}
