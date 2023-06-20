#include <iostream>
#include <math.h>
using namespace std;
class Forma {
public:
    virtual double perimetro() = 0;
    virtual double area() = 0;
};

class Quadrato : public Forma {
public:
Quadrato(double lato);

virtual double perimetro();
virtual double area();
double lato;
};
class Cerchio : public Forma {
    public: 
    
Cerchio(double raggio);

    double perimetro();
    double area();
    double raggio;
};
