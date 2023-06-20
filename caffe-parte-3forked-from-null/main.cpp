#include "caffe.h"


void menu();

int main(){
    char rientra;
    char scelta;
    int dim;
    caffe prodotto;
           do {
    menu();
        cout<<" \n\tQUESTO DISTRIBUTORE EROGA--CAFFE--THE--LATTE\n";
        cout<<"\tvuoi inserire una monta?\n\n\t1 -> SI  ";
        cin>>dim;
        cout<<"\n\tIserisci una moneta:  ";
        cin>>scelta;
        prodotto.push_monet(dim);
            
            switch(scelta) {
case '1':
{
    cout<<"\n\n-----SCELTA BEVANDA'---------\n"<<endl;
    cout<<"CAFFE: cod 1"<<endl;
    cout<<"THE:   cod 2"<<endl;
    cout<<"LATTE: cod 3"<<endl;
    

    
  
    do{
    menu();
   
    cin>>scelta;
    switch(scelta){
        case '1':
        
     prodotto.stampa_caffe();
        
       prodotto.pop_caffe();
       prodotto.pop_monet();
     "pause";
        break;
        case '2':
        prodotto.stampa_the();
        prodotto.pop_the();
        prodotto.pop_monet();

       "pause";
        break;
        case '3':
        prodotto.stampa_latte();
        prodotto.pop_latte();
        prodotto.pop_monet();
        "pause";

       break;
        
       

 case '4':
 cout<<"Hai fatto un inserimento sbagliato."<<endl;
                break;
                  case '5':
                  return 0;
           
    };
}while(scelta!='6');
rientra;


}
              
                break;
case '2':
    break;
    default:
                cout<<"Hai fatti un inserimento sbagliato."<<endl;
        }
}while(scelta != '3');


  
return 0;
}

void menu(){
 
   
   


    return ;
}