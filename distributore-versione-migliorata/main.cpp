#include "distributore.h"


void menu();

int main(){
FILE *leggi;
    distributore prodotto;
    char rientra;
    char scelta,crea,temp;
    int dim,mon,i,n,s,x;

do
{
menu();
    prodotto.presentazione();
        cin>>n;
        while(n<1 || n>2){ 
    prodotto.errore1_2();
        cin>>n;
        scanf("%c", &temp ); }
 
switch (n) 
{
case 1:
        fopen("TICKET.txt","r");
        feof(leggi); fscanf(leggi,"%d ",&mon);
        cout<<mon<<" ";
        dim=mon;
    prodotto.ins_Dim(dim);
break;
case 2:
    prodotto.moneta();
        cin>>dim;
        while(dim<1 || dim>9)
        {
        prodotto.errore_mon();
        cin>>dim;
        scanf("%c", &temp ); 
            
        }
prodotto.ins_Dim(dim);
break;
}

    prodotto.cambio_idea();
        cin>>scelta;
sleep(1);
switch(scelta) 
{
case '1':
{
sleep(1);

   prodotto.menu();
do
{
menu();
   
        cin>>scelta;
switch(scelta)
{
case '1':
    prodotto.stampa_caffe(crea);
    prodotto.pop_caffe();
    prodotto.pop_monet();
    "pause";
break;
case '2':
    prodotto.stampa_the(crea);
    prodotto.pop_the();
    prodotto.pop_monet();
    "pause";
break;
case '3':
    prodotto.stampa_latte(crea);
    prodotto.pop_latte();
    prodotto.pop_monet();
        "pause";
break;
case '4':
    prodotto.ins_errore();

                break;
case '5':
                  
    prodotto.stampa(crea); 
    prodotto.stampa_ticket();
return 0;
case '6':
break;
default:
    prodotto.ins_errore_2();
};
}
while(scelta!='6');
rientra;

}
              
break;
case '2':
    prodotto.stampa(crea);
    prodotto.stampa_ticket();
return 0;
case '3':

    prodotto.ins_errore_2();
            
break;
default:
    cout<<endl;       
}     
}
while(scelta != '3');
    prodotto.ins_errore(); 

}
void menu(){
return ;
}