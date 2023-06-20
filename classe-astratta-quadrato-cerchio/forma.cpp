#include "forma.h"
Quadrato::Quadrato(double lato) {
     this->lato = lato;
}
Cerchio::Cerchio(double raggio){
    this->raggio=raggio;
        
}
    
double Quadrato::perimetro()  {
        double perimetro = lato*4;
        cout << perimetro << endl;
return perimetro;
}
    
 double Quadrato::area(){
        double area=lato*lato;
        cout << area << endl;
return area;
}
double Cerchio::perimetro(){
        double perimentro = 2*3.14*raggio;
        cout << perimentro << endl;
return perimentro;
}

double Cerchio::area(){
        double area = 3.14*(raggio*raggio);
        cout << area << endl;
return area;
}
