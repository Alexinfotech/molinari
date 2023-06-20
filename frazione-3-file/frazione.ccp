
#include <iostream>
#include "frazione.h"
using namespace std;


    
                    
    frazione::frazione(){                             
      num=0;                             
      den=1;
    }
     
    frazione::frazione( int num, int den){   
        this-> num=num;               
        this-> den=den;               
      
    }
    void frazione::setNum(int n){
       num=n;
    }
       
    void frazione::setDen(int d){
        if(d!=0){
        den=d;
    }
        else 
        cout<<"\n\n\t          ---!!!!ATTENZIONE!!!!---\n           \tHAI INSERITO IL DENOMINATORE\n\n \t                ((((ZERO))))\n\a\a\a\a\a\a\n______VERRA' INSERITO DENOMINMATORE 1 ______\n\n\n";
      
    }
    int frazione::getNum(){
                  return num;
    }
    int frazione::getDen(){
                  return den; }
     
     void frazione::stampa(){
         
         if(den!=1){// elimina visualizzazione denomnatore zero con inserimento frazione da tastiera
         cout << "" <<this-> num << "/" <<this-> den;
            }else 
            //(den=1);
              cout << this-> num ;}
            
         
                // secondo costruttore con regole addizione frazione 
                //somma loggetto corrente frazione all'oggetto che passo come paramtro
                // memorizza il risultato della somma in un nuovo oggetto f di tipo frazione
                       
                            //THIS Num=A=(TA))    A.Num=C=(A))
                            //THIS Den=B=(TB))    A.Den=D=(B))
                // 4 operazioni
    frazione frazione::operator+ (frazione op){        /* A/B+C/D =TA*B+A*TB/TB*B */
            frazione ris;
                    ris.num=this->num*op.den+this->den*op.num;     //metodo
                    ris.den=this->den*op.den; 
                    cout << "\n   +++ Somma +++\n\t" ; 
        return ris;
    }
    frazione frazione::operator - (frazione op){      /* A/B-C/D =TA*B-A*TB/TB*B */
            frazione ris;
                     ris.num=this->num*op.den-this->den*op.num;
                     ris.den=this->den*op.den; 
                     cout << "\n--- Sottrazione ---\n\t" ;
         return ris;
     
    }
    frazione frazione::operator * (frazione op){  /* A/B*C/D =TA*A/TB*B */
            frazione ris;
                     ris.num=this->num*op.num;
                     ris.den=this->den*op.den;  
                     cout << "\nxxx Moltiplicazione xxx\n\t" ;
        return ris;
    }
    frazione frazione::operator /(frazione op){       /* A/B:C/D =TA*B/TB*A */
            frazione ris;
                     ris.num=this->num*op.den;
                     ris.den=this->den*op.num;  
                     cout << "\n  ::: Divisione :::\n\t" ;
                   
        return ris;
    }
    //confronto  
    bool  frazione::operator >(frazione op)////prima frazione maggiore 
{
    return !((this->num * op.den) <  (op.num * this->den)  || ((this->num * op.den) == (op.num * this->den)));
   
    }
    
    bool  frazione::operator <(frazione op)////prima fraione minorea/b > c/d = a*d > c*b;
{
   return !((this->num * op.den) < (op.num * this->den)  || ((this->num * op.den) == (op.num * this->den)));
   
    }

