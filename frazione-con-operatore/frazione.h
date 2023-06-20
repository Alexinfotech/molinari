using namespace std;

class frazione {                   
    
 private:
    int num;      // proprietà                   
    int den;                        
    
     public:                      
     frazione(){                             
      num=0;                             
      den=1;
     };
     
     frazione( int num, int den){    
        this-> num=num;               
         if(den!=0)              
         this->den=den;               
         else
         cout<<"denominatore = zero\n";
     };
     
     void stampa(){                    
         cout << "\n" <<this-> num << "/" <<this-> den;
     }
         
                // secondo costruttore con regole addizione frazione 
                //somma loggetto corrente frazione all'oggetto che passo come paramtro
                // memorizza il risultato della somma in un nuovo oggetto f di tipo frazione
                       
                            //THIS Num=A=(TA))    A.Num=C=(A))
                            //THIS Den=B=(TB))    A.Den=D=(B))
                
     frazione operator+ (frazione op){        /* A/B+C/D =TA*B+A*TB/TB*B */
             frazione ris;
                    ris.num=this->num*op.den+this->den*op.num;     //metodo
                    ris.den=this->den*op.den; 
                    cout << "\nsomma" ; 
         return ris;
     }
     frazione operator - (frazione op){      /* A/B-C/D =TA*B-A*TB/TB*B */
             frazione ris;
                     ris.num=this->num*op.den-this->den*op.num;
                     ris.den=this->den*op.den; 
                     cout << "\nsottrazione" ;
         return ris;
     
     }
      frazione operator * (frazione op){  /* A/B*C/D =TA*A/TB*B */
             frazione ris;
                     ris.num=this->num*op.num;
                     ris.den=this->den*op.den;  
                     cout << "\nmoltiplicazione" ;
         return ris;
      }
      frazione operator /(frazione op){       /* A/B:C/D =TA*B/TB*A */
            frazione ris;
                    ris.num=this->num*op.den;
                    ris.den=this->den*op.num;  
                    cout << "\ndivisione" ;
                   
         return ris;
      }
   
};