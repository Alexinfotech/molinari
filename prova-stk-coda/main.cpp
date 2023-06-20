#include "regolavettore.h"

void menu();
int main()
{
char scelta;
char rientra;
        do {
    menu();
        cout<<"iserisci una scelta[1-3]:";
            cin>>scelta;
            switch(scelta) {
case '1':
{
        regolavettore stack;//nome oggetto (stack)
            int dimStk, scelta, num;
                cout<<"INTERFACCIA STACK"<<endl;
                    cout<<"Inserisci la dimensione dello stack: ";
                        cin>>dimStk;
                            stack.insDim(dimStk);
        do {
                cout<<endl<<"1)Push"<<endl<<"2)Pop"<<endl;
                cout<<"3)Visualizza"<<endl;
                cout<<"4)Ritorna nel menù principale"<<endl;
                cin>>scelta;
        switch(scelta) {
            case 1:
                cout<<"Che numero vuoi inserire nello stack?        ";
                    cin>>num;
                        stack.push(num);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.visualizzaStk();
                    cout<<"il valore 0 e' l'azzeramento di default"<<endl;
                break;
            case 4:
                break;
            default:
                cout<<"Hai fatto un inserimento sbagliato."<<endl;
        }
        }while(scelta != 4);
rientra;//rientra nel menù principale
}
break;
case '2':
{
        regolavettore coda;//nome oggetto coda
            int scelta,num,dimCoda;
                cout<<"INTERFACCIA CODA"<<endl;
                    cout<<"Inserisci la dimensione:";
                        cin>>dimCoda;
                            cout<<endl;
                                coda.insDimx(dimCoda);
        do{
                cout<<"1)Push"<<endl<<"2)Pop"<<endl;
                cout<<"3)Visualizza contenuto coda"<<endl;
                cout<<"4)verifica spazio disponibile"<<endl;
                cout<<"5)Ritorna nel menù principale"<<endl;
                cin>>scelta;   
        switch(scelta){
            case 1:
                cout<<"Che numero vuoi inserire nella coda?:       ";
                    cin>>num;
                        coda.ins(num);
                break;  
            case 2:                                              
                coda.circolare();
                break;  
            case 3:
                coda.visualizzacoda();
                    cout<<"il valore -1 e' l'azzeramento di default"<<endl;
                 break;  
            case 4:
                if(coda.spazio()==false){
                    cout<<"Vettore vuoto"<<endl;}
                        else if(coda.spazio()==true){
                            cout<<"C'è ancora spazio nel vettore"<<endl;
                }
                else{
                    cout<<"vettore pieno"<<endl;
                };
                break;
            case 5:
                break;
            default:
                cout<<"Hai fatto un inserimento sbagliato."<<endl;
            break;
            };
        }while(scelta!=5);
rientra;//rientra nel menù principale
}
              
                break;
case '3':
    break;
    default:
                cout<<"Hai fatti un inserimento sbagliato."<<endl;
        }
}while(scelta != '3');
return 0;
}
void menu(){
    cout<<"-----MENU' PRINCIPALE---------"<<endl;
    cout<<"Seleziona la regola che vuoi utilizzare per il vettore"<<endl;
    cout<<"1) effetto stack"<<endl;
    cout<<"2) effetto coda cirocolare"<<endl;
    cout<<"3)Esci"<<endl;
return ;
}
