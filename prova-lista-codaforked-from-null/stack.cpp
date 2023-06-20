 #include <iostream>////agg
#include "stack.h"

using namespace std;

void push(lista& testa, int number){
        lista nuovo_nodo = new nodo;
        nuovo_nodo -> data = number;
        nuovo_nodo -> next = testa;
        testa = nuovo_nodo;
}

void popPari(lista& testaPari, lista& ind){
        lista del;
        
        if(testaPari != NULL)
            {
                del = testaPari;
                ind = testaPari -> next ;
                cout<<"\nIl numero estratto dalla lista pari e': "<<testaPari -> data<<endl;
                delete del;
                testaPari = ind;
            }
        else
            {
                cout<<"\n\nLa lista e' vuota!";
            }
}
   
    
void popDispari(lista& testaDispari, lista& ind){
        lista del;
        
        if(testaDispari != NULL)
            {
                del = testaDispari;
                ind = testaDispari -> next;
                cout<<"\nIl numero estratto dalla lista dispari è: "<<testaDispari -> data<<endl;
                delete del;
                testaDispari = ind;
            }
        else
            {
                cout<<"\n\nLa lista e' vuota!";
            }
    }
    void popCoda(lista& scorri,lista& testaPari, lista& indCoda){//////////
        lista del;
        
        if( scorri != testaPari )
            {
                del = NULL;
                indCoda = scorri -> next;
                cout<<"\nIl numero estratto dalla lista pari è: "<<scorri -> data<<endl;
                delete del;
                testaPari = indCoda;
            }
        else
            {
                cout<<"\n\nLa lista e' vuota!";
            }
    }
   /*   void popDispariCoda(lista& testaDispari, lista& indCoda){///////
        lista del;
        
        if(NULL != testaDispari)
            {
                del = testaDispari;
                indCoda = testaDispari -> next;
                cout<<"\nIl numero estratto dalla lista dispari è: "<<testaDispari -> data<<endl;
                delete del;
                testaDispari = indCoda;
            }
        else
            {
                cout<<"\n\nLa lista e' vuota!";
            }
    }*/
void print_list(lista& testa, lista& ind){
        ind = testa;
        
        if(ind != NULL)
            {
                while(ind != NULL)
                    {
                        cout<<ind -> data<<"\n";
                        
                        ind = ind -> next;
                    }
            }
}
void print_listPopPre(lista& testa, lista& ind){
       
        ind = testa;
        
        if(ind != NULL)
            {
                while(ind != NULL)
                    {
                        cout<<ind -> data<<" ";
                        
                        ind = ind -> next;
                    }
            }
    }
void print_listPopPost(lista& testa, lista& ind){
        ind = testa;
        
        if(ind != NULL)
            {
                while(ind != NULL)
                    {
                        cout<<ind -> data<<"\n";
                        
                        ind = ind -> next;
                    }
            }
}