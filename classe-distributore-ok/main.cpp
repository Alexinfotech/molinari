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

    cout<<" \n\t\t    QUESTO DISTRIBUTORE EROGA--CAFFE'--THE--LATTE\n";
    cout<<" \n\t\t°°°°@@@IL COSTO DI OGNE PRODOTTO E' UNA MONETA@@@°°°°\n";
    cout<<"\n\t  INSERISCI IL NUMERO PER INDICARE QUANTE MONETE STAI INSERENDO:  ";
    cout<<"\n\t  OPPURE DIGITA 0 PER USUFRUIRE DEL CREDITO TICKET \n\t  SUCCESSIVAMENTE SELEZIONARE (RISCATTA TICKET) NEL MENU SCELTA BEVANDA";
    cout<<"\n\t  ORA DIGITA:   ";
    cout<<"\n\t  1 riscatto  ticket   ";
    cout<<"\n\t  2 per inserire le monete   ";
    cin>>n;
    while(n<1 || n>2){ 
    printf("\n\t\tIl numero selezionato è errato  ");
    printf("\n\t\tINSERIRE NUMERO RICHIESTO 1 0 2  --->   ");
    cin>>n;
    scanf("%c", &temp ); }
    

switch (n) 
{
case 1:
        fopen("TICKET.txt","r");
        feof(leggi); fscanf(leggi,"%d ",&mon);
        cout<<mon<<" ";
        dim=mon;
    prodotto.insDim(dim);
break;
case 2:
        printf("\n\t\t  1/9 MONETE CONSENTITE");
        printf("\n\t\t  ORA DIGITA -->   ");
        cin>>dim;
        while(dim<1 || dim>9)
        {
        printf("\t\tIl numero di monete consentito e tra 1 e 9  ");
        printf("\n\t\tINSERIRE QUANTITà RICHIESTA --->   ");
        cin>>dim;
        scanf("%c", &temp ); 
            
        }
prodotto.insDim(dim);
break;
}

    cout<<"\n\t\t\tDIGITA 1 + INVIO PER CONFERMA ->  ";
    cout<<"\n\t\t\tDIGITA 2 + INVIO SE HAI CAMBIATO IDEA ->  ";
    cin>>scelta;
    sleep(1);
switch(scelta) 
{
case '1':
{
sleep(1);
   
    cout<<"\n\n\t-----SCELTA BEVANDA'---------\n"<<endl;
    cout<<"\tCAFFE: cod 1 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tTHE:   cod 2 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tLATTE: cod 3 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tRIPROGRAMMA CREDITO O STAMPA TICKET: cod 5"<<endl;
    cout<<"\tINSERIRE CODECE BEVANDA\n";
    cout<<"\tCOD -> ";
  
 
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
cout<<"\tHai fatto un inserimento sbagliato."<<endl;
                break;
case '5':
                  
    prodotto.stampa(crea); 
        cout<<"\n\t\t\tRITIRA IL TICKET BUONO ACQUISTI  ";
        cout<<"\n\t\t\t  ARRIVADERCI  ";
return 0;
case '6':
break;
efault:
    cout<<"\tHai fatto un inserimento sbagliato\n";             
    cout<<"\t INSERISCI SCELTA --->   ";  
};
}
while(scelta!='6');
rientra;

}
              
break;
case '2':
    prodotto.stampa(crea);
        cout<<"\n\t\t\tRITIRA IL TICKET BUONO ACQUISTI ";
        cout<<"\n\t\t\t  ARRIVADERCI  ";
return 0;
case '3':
        cout<<"\tHai fatto un inserimento sbagliato\n";             
        cout<<"\t INSERISCI SCELTA --->   ";  
            
break;
default:
        cout<<endl;       
}     
}
while(scelta != '3');
    cout<<"\tHai fatto un inserimento sbagliato\n";  

}
void menu(){
return ;
}