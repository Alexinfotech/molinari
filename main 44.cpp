#include <iostream>
using namespace std;

class frazione {                   //  classe frazione
    
 private:
    int num;                         // numeratore attributo privato
    int den;                         // denominatore  ""       ""
    
     public:                       // metodi pubblici
     frazione(){                   // costruttore di default senza parametri di inizializazzione
   
      num=0;                         // numeratore=n
      den=1; 
     //num*this->den=2;// denominatore=d
     };
     
     frazione( int num, int den){     // primo costruttore inizializza l'oggetto con parametri n d
        this-> num=num;               //this punta/ indetificatore oggetto corrente  n attributo privato
         if(den!=0)                 // d diverso da zero= ok//non può esssre nullo
         this->den=den;               //this punta/ indeficatore oggetto corrente parametro d attributo privato
         else
         cout<<"denominatore = zero\n"; // messagggio errore del costruttore  con denominatore zero
                                   // };
                                      // frazione( int nu1, int den1){     // primo costruttore inizializza l'oggetto con parametri n d
        this-> num=num;
                                     //den=num*this->den//this punta/ indetificatore oggetto corrente  n attributo privato
    if(this->num*den>num*this->den)                 // d diverso da zero= ok//non può esssre nullo
        this->den=den;               //this punta/ indeficatore oggetto corrente parametro d attributo privato
         else
         cout<<"f1 maggiore di  f2\n"; // messagggio errore del costruttore  con denominatore zero
     };
     
    /*int mcm( int den){
    int ris=this->den;
     while(ris&this->den!=0){
         ris+=den;
        
      return ris;
     };
     
    /* int mcd(int x, int y) {
  while (y > 0) {
    int r = x % y;
    x = y;
    y = r;*/
    
     
     void stampa(){                    // metodo stampa attributi 
         cout << "\n" <<this-> num << "/" <<this-> den;
     }
         
                // secondo costruttore con regole addizione frazione 
                //somma loggetto corrente frazione all'oggetto che passo come paramtro
                // memorizza il risultato della somma in un nuovo oggetto f di tipo frazione
                       
                            //THIS Num=A=(TA))    A.Num=C=(A))
                            //THIS Den=B=(TB))    A.Den=D=(B))
                
     frazione somma(frazione op){        /* A/B+C/D =TA*B+A*TB/TB*B */
             frazione ris;
                    ris.num=this->num*op.den+this->den*op.num;
                    ris.den=this->den*op.den; 
                    
         return ris;
     }
     frazione sottrazione(frazione op){      /* A/B-C/D =TA*B-A*TB/TB*B */
             frazione ris;
                     ris.num=this->num*op.den-this->den*op.num;
                     ris.den=this->den*op.den;  
         return ris;
     
     }
      frazione moltiplicazione(frazione op){  /* A/B*C/D =TA*A/TB*B */
             frazione ris;
                     ris.num=this->num*op.num;
                     ris.den=this->den*op.den;  
         return ris;
      }
      frazione divisione(frazione op){       /* A/B:C/D =TA*B/TB*A */
            frazione ris;
                    ris.num=this->num*op.den;
                    ris.den=this->den*op.num;  
         return ris;
      }
     
 /* frazione maggiore(frazione op){  /* A/B*C/D =TA*A/TB*B */
           //  frazione ris;
                   //  ris.num=this->num*op.den;
                   //  ris.den=this->den*op.num;  
      
   //  return ris;
 // } */
     
     
     
};
int main(){                // metodo,testa la classe
    frazione obj1(10,1);    // istanzia oggetto 
    frazione obj2(1,10);  
    ;// istanzia oggetto 
    obj1.stampa();
    obj2.stampa();
    frazione obj3=obj1.somma(obj2);      //somma ob1 ob2 ,invoco ob1 metodo add passa il parametro a ob2
    obj3.stampa();
    frazione ojb4=obj1.sottrazione(obj2);
    ojb4.stampa();
    frazione obj5=obj1.moltiplicazione(obj2);
    obj5.stampa();
    frazione obj6=obj1.divisione(obj2); 
    obj6.stampa();
    obj8.frazione=obj1(>obj2);
    obj8.stampa();
   // frazione obj7=obj1.maggiore(obj2); 
   // obj7.stampa();
      
    
    return 0;
}
  

