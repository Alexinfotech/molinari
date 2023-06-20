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

fp=fopen("Cronologia_risultati.txt", "a");
cont_cella = 0;
somma_dispari = 0;
srand(time(NULL)); 
cout<<"iserisci dimensione vettore --> ";
cin>>dim;
v = new int[dim];
cout<<"\nvettore\n";
for(int i = 0; i < dim; i++){*(v + i) = rand()%20;
cout<<"-"<<*(v+i);}
fprintf(fp,"vettore ");
for(int i=0;i < dim;i++){fprintf(fp,"%d-",*(v+i));} 

cout<<"\n\n";
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
    
 
fprintf(fp,"\n celle  %d         somma %f             media %f   \n\n\n", cont_cella,somma_dispari,media);
fclose(fp);
}

void verifica::ins_media(int dim){
    
if((media>1) && ( media<11))//doppio controllo
                        {
                        cont_cella = 0;
                        somma_dispari = 0;  
                        dim=media;  
                        FILE *fp;
                        fp=fopen("Cronologia_risultati.txt", "a");
	
                        srand(time(NULL)); 

                        v = new int[dim];
                        cout<<"\nvettore\n";
                        for(int i = 0; i < dim; i++){*(v + i) = rand()%10;
                        cout<<"-"<<*(v+i);}
                        for(int i=0;i < dim;i++){fprintf(fp,"%d-",*(v+i));} 
                        cout<<"\n\n";

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
                        fprintf(fp,"\n celle %d         somma %f             media %f   \n\n\n",cont_cella,somma_dispari,media);    
                        fclose(fp);
                        }
                        else
                            {
                                cout<<"valore non compreso tra 2 e 10 \n"; 
                                exit(1);
                            }
}





