#include "verifica.h"
  
verifica::verifica(){
v = NULL;


 }
 
void verifica::ins_dim(){
srand(time(NULL)); 
cout<<"iserisci dimensione vettore --> ";
cin>>dim;
v = new int[dim];
for(int i = 0; i < dim; i++){*(v + i) = rand()%26;
cout<<"in"<<*(v+i)<<endl;}
}

void verifica::stampa(){
    for(int i = 0; i < dim; i++){
    cout<<*(v+i)<<endl;
    }
    }
    


/*void verifica::disp(){
   
     if( *(v+i)%2 != 0)
                { 
                 disp++;
                }
            else
                {
                    cout<<"errore";
                }
                
        }
void verifica::stampa_disp(){
    for(int i = 0; i < disp; i++){
    cout<<disp<<endl;}
    
    if(disp<2 && disp>10)
    {
        cout<<"vuoi utilizzare il valore come nuova dimensione di un nuovo vettore?";
        
    }
    else
    {
        return 0;
    }*/
        

    