#include "studente.h"
void menu();


  
  
int main(){
    
    string nome,cognome;
    char scelta;
    int voto;
    int vet;
    int* c;
    
    
  
    cout<<"Inserisci il nome dello studente: "<<endl;
    cin>>nome;
    cout<<"Inserisci il cognome dello studente: "<<endl;
    cin>>cognome;
    studente f(nome, cognome);

    f.setData();
    
    do{
    menu();
    cout<<"iserisci una scelta[1-5]:";
    cin>>scelta;
    switch(scelta){
        case '1':
          do {
                cout<<endl<<"Inserisci un voto."<<endl;
                    cin>>voto;
                if (voto< 0 || voto> 10){
                    cout<<endl<<"Il voto deve essere compreso tra 0 e 10"<<endl;}
                }while (voto < 0 || voto > 10);

            f.setVet(voto);
              
  
        ("pause");
        break;
        case '2':
        f.getVet();
        
        ("pause");
        break;
         case '3':
            f.stampaMese();
            f.mediaVet();
            
           
        ("pause");
        break;
        case '4':
        return 0;
        
        break;
        default:
        ("pause");
    }
}while(scelta!='5');
return 0;
}

void menu(){
   
    
    cout<<"1) inserisci voto"<<endl;
    cout<<"2) stampa voti inseriti"<<endl;
    cout<<"3) media voti inseriti "<<endl;
    cout<<"4) Esci"<<endl;


    return ;


}
