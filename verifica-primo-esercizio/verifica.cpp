#include "verifica.h"
  
verifica::verifica(){
    v = NULL;
    cont_cella = 0;
    somma_dispari = 0;
    float media = 0;

 }
verifica::verifica(float media){
    cont_cella = 0;
    somma_dispari = 0;
      
 }
 
void verifica::ins_dim(int dim){
cont_cella = 0;
somma_dispari = 0;
srand(time(NULL)); 
cout<<"iserisci dimensione vettore --> ";
cin>>dim;
v = new int[dim];
cout<<"\nvettore\n";
for(int i = 0; i < dim; i++){*(v + i) = rand()%18;
cout<<"-"<<*(v+i);}
for(int i = 0; i < dim; i++)
                            {
                            if(i%2 != 0)
                                        {
                                            somma_dispari=somma_dispari+*(v+i);
                                            cont_cella++; 
                                        }
   
}

cout<<"somma dei numeri nelle celle in posizione dispari \n";
cout<<somma_dispari<<endl;
cout<<"\nnumero celle dispari\n";
cout<<cont_cella<<endl;


if(cont_cella != 0)
                    {
                        media=somma_dispari/cont_cella;
                        cout<<"\nmedia dei numeri nelle celle in posizione dispari\n";
                        cout<<media<<endl;
                    }
                    else
                        {
                            cout<<"il vettore non contiene numeri dispari\n";
                        }
    
}

void verifica::ins_media(int dim){
    
if((media>1) && ( media<11))//doppio controllo
                        {
                        cont_cella = 0;
                        somma_dispari = 0;  
                        dim=media;  
                        srand(time(NULL)); 
                        v = new int[dim];
                        cout<<"\nvettore\n";
                        for(int i = 0; i < dim; i++){*(v + i) = rand()%18;
                        cout<<"-"<<*(v+i);}
                        

                        for(int i = 0; i < dim; i++)
                                                    {
                                                    if(i%2 != 0)
                                                                {
                                                                    somma_dispari=somma_dispari+*(v+i);
                                                                    cont_cella++; 
                                                                }
   
                                                    }

                        cout<<"somma dei numeri nelle celle in posizione dispari \n";
                        cout<<somma_dispari<<endl;
                        cout<<"\nnumero celle dispari\n";
                        cout<<cont_cella<<endl;

                        if(cont_cella != 0)
                                            {
                                            media=somma_dispari/cont_cella;
                                            cout<<"\nmedia dei numeri nelle celle in posizione dispari\n";
                                            cout<<media<<endl;
                                            }
                        else
                            {
                                cout<<"il vettore non contiene numeri dispari\n";
                            }
                        }
                        else
                            {
                                cout<<"valore non compreso tra 2 e 10 \n"; 
                                exit(1);
                            }
}





