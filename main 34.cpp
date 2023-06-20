/******************************************************************************
classe frazione
divisione
sollevo eccezione
metto sotto osservazione blocco codice
intercetto
visualizzo messaggio

*******************************************************************************/
#include <iostream>

using namespace std;
class frazione{
public:
    frazione(int num,int dem);//costruttore con paramentri
    void fra();//metodo void
private:
    int num;
    int den;
    int r;
};
frazione::frazione(int num,int dem){//costruttore 
};
void frazione::fra(){//metodo void
    if(den==0){//den = a zero
        throw"stai dividendo per zero";//sollevo eccezione
       }
       else{
        int r=num/den;
        cout<<r<<endl;
    }
}
int main(){
    int num, den;
    cout << "inserisci numeratore: ";
    cin >> num;
    cout << "inserisci denominatore: ";
    cin >> den;
    frazione a(num, den);
       try {// etto sotto osservazione
        a.fra();
    } catch (const char* messaggio) {//cacth intercetto 
    cout<<messaggio<<endl;
        
    }
return 0;
}