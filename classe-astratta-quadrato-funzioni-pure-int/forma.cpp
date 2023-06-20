#include "forma.h"
Quadrato::Quadrato(int lato) {
      this->lato = lato;
}
    
int Quadrato::perimetro()  {
        int perimetro = lato*4;
        cout << perimetro << endl;
        return perimetro;
}
    
 int Quadrato::area(){
        int area=lato*lato;
        cout<<area<<endl;
        return area;
}