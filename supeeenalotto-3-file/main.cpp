/*EMULAOTRE DI GIOCATA ENALOTTO CON INSERIMENTO NUMERI DA TASTIERA E GENERATORE DI SISTEMA AUTOMATICO 
CON STAMPA RICEVUTA

CLASSE ENALOTTO 
QUESTO PROGRAMMA GESTISCE UN ARRAY DA 6 ELEMENTI GENERATO CON FUNZIONE RAND E USO DI UN PUNYTATORE *VDI TIPO INT.
GESTISCE UN ARREY DI 6 ELEMENTI CON ISERIMENTO NUMERI DA TASTIERA CON USO DI PUNTATORE*V  DI TIPO INT 
E INDICE SP  SU ARRAY PER CONTROLLO EFFETIVO RIMPIMENTO.
GENERA RICEVUTA DELLA PRESUNTA GIOCATA CON L'USO DEL PUNATORE DI TIPO FILE.*/

#include "enalotto.h"

int main(){
    enalotto jeckpot;
    int scelta,num;
    int N,n;

    cout<<"\tGIOCA I TUOI NUMERI FORTUNATI\n";
    cout<<"\t1)GENARA UN SISTEMA  DI NUMERI SULLA RUOTA CHE VUOI\n ";
    cout<<"\t2)INSERISCI NUMERI FORTUNATI\n";
    cout<<"\t3)CONTROLLO MANUALE SISTMA\n";
    cout<<"\t4)ESCI\n\tINSERISCI SCELTA -->  ";
    do{

    cin>>scelta;
    switch(scelta){
    case 1:
        jeckpot.giocata();
        jeckpot.sistema();
       return 0;
        break;
    case 2:
        jeckpot.giocata();
        jeckpot.giocata_2();
        jeckpot.numeri(num);
       return 0;
        break;
        
    case 3:
        jeckpot.controllo();
       return 0;
       
    case 4:
       return 0;
       
    case 5:
        break;
        default:
       cout<<"Hai fatto un l'inserimento sbagliato"<<endl;
       cout<<"Il programma è entrato in protezione"<<endl;
       cout<<"Rilancia il programma"<<endl;
       return 0;
    }
}while(scelta!=5);

return 0;


}
