/******************************************************************************

Creare la classe Studente composta dai seguenti Membri
Proprietà
    1.	Nome
    2.	Cognome
    3.	dataNascita
    4.	vettore voti[10], inizializzato a -1 dai costruttori
    5.	variabile ultimo contenente l’ultimo voto assegnato, inizializzato a -1 dai costruttori
Metodi
    1.	costruttore con 2 parametri che indichino il nome ed il cognome dello studente avente anche lo scipo di inizializzare le proprietà voti e ultimo
    2.	setVoti con lo scopo di inserire un nuovo voto e con il compito di controllare se siano stati i 10 previsti dal vettore
    3.	getVoti con lo scopo di visualizzare i voti dello studente
    4.	getNome
    5.	getCognome
    6.	getData
    7.	mediaVoti con lo scopo di calcolare la media dei voti inseriti
Scrivere un main che utilizzi la classe Studente e svolga:
1.	Consentire all’utente attraverso un menu di
    a.	Richiedere l’inserimento di un nuovo voto
    b.	Visualizzare i voti presenti
    c.	Richiedere la Media dei Voti visualizzandone: Nome Cognome Media e l’elenco dei voti
    d.	Uscire dal programma


*******************************************************************************/
#include <iostream>
#include "lib.h"

using namespace std;

int main()
{   
    string nome, cognome;
    int ans, voto;
    
    cout<<"Inserisci il nome dello studente: "<<endl;
    cin>>nome;
    
    cout<<endl<<"Inserisci il cognome dello studente: "<<endl;
    cin>>cognome;
    
    Studente a(nome, cognome);
    
    do {
        cout<<endl<<"Che operazione vuoi fare?"<<endl<<"1)Inserisci voto"<<endl<<"2)Visualizza voti"<<endl<<"3)Media voti"<<endl<<"4)Esci"<<endl<<endl;
        cin>>ans;
        
        switch(ans) {
            case 1:
                do {
                    cout<<endl<<"Inserisci un voto."<<endl;
                    cin>>voto;
                    if (voto < 0 || voto > 10) {
                        cout<<endl<<"Il voto deve essere compreso tra 0 e 10"<<endl;
                    }
                }while (voto < 0 || voto > 10);
                
                a.setVoti(voto);
                break;
            case 2:
                a.getVoti();
                break;
            case 3:
                a.mediaVoti();
                break;
            case 4:
                cout<<endl<<"Arrivederci"<<endl;
                break;
            default:
                cout<<endl<<"Non e' stata fatta una scelta corretta."<<endl;
        };
    }while (ans != 4);
    return 0;
}