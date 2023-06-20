#include"studente.h"



studente::studente(int gg,int mm, int aa)
{
giorno = gg;
mese = mm; 
anno = aa;   
}

void studente::setData()
{
int g,m,a;

do
 {
  cout<<"Inserire data di nascita"<<endl;   
  cout << "giorno: ";
  cin >> g;    
 }
 while ( !(g >0 && g < 32))   ;        
 giorno = g;

do
 {
  do
  {
  cout << "mese: ";
  cin >> m;    
  }  
  while( (m == 2 && giorno > 28) ||
    (m==4||m==6||m==9 ||m==11 && giorno == 31));
 }
 while ( !(m >0 && m < 13))   ;        
 mese = m;


do
 {
  cout << "anno: ";
  cin >> a;    
 }
 while ( !(a >1000 && a < 9999))   ;        
 anno = a;}

void studente::getData()
{
cout << "la data selezionata corrisponde a " << giorno 
      <<endl<<mese<<endl<<anno<<endl;    
}

void studente::stampaMese()
{
cout << "nato il" << giorno ;
switch(mese)
{
   case 1:
      cout << " Gennaio ";    
      break;
   case 2:
      cout << " Febbraio ";    
      break;
   case 3:
      cout << " Marzo ";    
      break;
   case 4:
      cout << " Aprile ";    
      break;
   case 5:
      cout << " Maggio ";    
      break;
   case 6:
      cout << " Giugno ";    
      break;
   case 7:
      cout << " Luglio ";    
      break;
   case 8:
      cout << " Agosto ";    
      break;
   case 9:
      cout << " Settembre ";    
      break;
   case 10:
      cout << " Ottobre ";    
      break;
   case 11:
      cout << " Novembre ";    
      break;
   case 12:
      cout << " Dicembre ";    
      break;                                    
}
cout << anno << endl;
    
}

studente::studente(string nome, string cognome) {
        this->nome = nome;
        this->cognome = cognome;
    v=new int [voto];
    for(int i = 0; i < 10; i++) {
        *(v+i) = -1;
    }
        ultimo = -1;
}

  

void studente::setVet(int voto) {
    
    c=new int[curr];
    if(curr < 10) {
        vet[curr] = voto;
        ultimo = voto;
        curr++;
        acurr++;
    }else {
        cout<<"Hai superato il limite massimo, non e' possibile inserire altri voti ."<<endl;
    }
}

void studente::getVet() {
    
    if(curr == 0) {
        cout<<endl<<"Non hai ancora inserito dei voti da visualizzare."<<endl;
    }else {
        cout<<endl<<"I voti inseriti sono:"<<endl;
    for(int i = 0; i < curr; i++) {
        cout<<vet[i]<<endl;
        }
    }
}

void studente::mediaVet() {
    cout<<endl<<"Nome: "<<nome<<endl;
    cout<<"Cognome: "<<cognome<<endl;
    for(int i = 0; i < curr; i++) {
        temp = temp + vet[i];
    }
    media = temp / acurr;
    cout<<"La media dei voti inseriti e': "<<media<<endl;
    getVet();
}

string studente::getNome() {
    return nome;
}

string studente::getCognome() {
    return cognome;
}



