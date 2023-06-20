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
    //frazione(int num); costruttore inutile!!!
    frazione(int num, int den);
    //frazione(int den1, int den2);
    //inizializza le proprieta' den e num 
    
    void setNum(int num); //controllo set get
    void setDen(int den);
    
    
    int getNum();
    int getDen();
    
    void stampa();
    
   //OPERATORI 
    frazione operator +(frazione op);//somma +
    frazione operator -(frazione op);//sottrazione -
    frazione operator *(frazione op);//moltiplicazione *
    frazione operator /(frazione op); //divisione /
   //METODI
    bool operator >(frazione op);//confronto >
    bool operator <(frazione op);//confronto <
    int mcd(int num, int den);//crea massimo comune divisore nella singola frazione
    void semplifica();// lancia il massimo comune divisore al momento della stampa a schermo
   };