#include <iostream>
#include <math.h>
using namespace std;
class Forma {
public:
    virtual int perimetro() = 0;
    virtual int area() = 0;
};

class Quadrato : public Forma {
    
public:
Quadrato(int lato);

int perimetro();
int area();
int lato;
};
