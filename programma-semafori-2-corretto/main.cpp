#include "verifica.h"




int main(){
   
    int dim;
  
   // cout<<"iserisci una scelta --> ";

    int scelta;
    verifica compito;
    
    
        
    do{
    cout<<"1) stampa vettore"<<endl;
    cout<<"2) stampa media numeri dispari"<<endl;
    cout<<"3) Esci"<<endl;
   
    cin>>scelta;
    
   
    
    switch(scelta){
    
        case 1:
       
    compito.ins_dim();  
       // 
       // compito.stampa();
        
       
       
        break;
        case 2:
        compito.stampa();
       // compito.disp();
        //compitp.stampa_disp();
       
        break;
        case 3:
        return 0;
        
        break;
        default:
     cout<<"";
    }
}while(scelta!=4);
return 0;
}


  
   
    


   





  