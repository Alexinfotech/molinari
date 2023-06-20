#include <iostream>
using namespace std;

class frazione
{
    
    private://PROPRIETA'
 
    int num;
    int den;
    
  
    public:
    
                               //COSTRUTTORI
    frazione();//inizializza le proprieta' num = 0 e den = 1
    
    frazione(int num, int den);//inizializza le proprieta' den e num 
    
    
    
    void setNum(int n); 
    void setDen(newDen);                                                      
    void setDen(int d);
    void setNum(newNum);
    int getNum();
    int getDen();
    
   void stampa();
    
   //OPERATORI
    
    frazione operator +(frazione op);//somma +
    
    frazione operator -(frazione op);//sottrazione -
    
    frazione operator *(frazione op);//moltiplicazione *
  
    frazione operator /(frazione op); //divisione /
   
    bool operator >(frazione op);//confronto >
    
    bool operator <(frazione op);//confronto <
   
};