/*
MIGLIORAMENTO
aggiunto file cronologia

*/
#include "verifica.h"

int main(){
verifica compito;
int dim;
int scelta;
int media;


char rientra;
    do{

    cout<<"VETTORE CON GENENERATORE DI NUMERI CASUALI"<<endl;
    cout<<"1) inserisci dimensione  vettore"<<endl;
    cout<<"2) exit"<<endl;
    cout<<"scelta -->  ";
    cin>>scelta;

    switch(scelta){
 
    case 1:
        compito.ins_dim(dim); 
                     
                                do{
                               
                        
                                cout<<"\nSE LA MEDIA E' COMPRESA TRA IL 2 E IL 10 PUOI UTLIZZARLA PER LA DIEMNSIONE DI UN NUOVO VETTORE"<<endl;
                                cout<<"1) SI"<<endl;
                                cout<<"2) NO --> inserisci nuova dimensione"<<endl;;
                                cout<<"3) exit"<<endl;
                                cout<<"scelta -->  ";
                                cin>>scelta;
    
                                switch(scelta){
                                case 1:
                                    compito.ins_media(dim); 
                                    return 0;
                                    break;
            
                                case 2:
                                    compito.ins_dim(dim); 
                                    default:
                                    break;
                                case 3:
                                    return 0;
                                    break;
                                  
                                }
                                
                                }while(scelta!=4);
                                              
                  
        
        
              
    case 2:
        break;
        default:
     cout<<"Scelta non consentita."<<endl;
     break;
    }
}while(scelta!=2);
rientra;
return 0;
}



  
   
    


   





  