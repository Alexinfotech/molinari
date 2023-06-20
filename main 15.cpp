#include <iostream>
using namespace std;

class Acqua {
public:
    virtual void stato() = 0;
};

class Liquido : public Acqua {
public:
    void stato()  {
       cout << "blup blup blup!" << std::endl;
    }
};

class Gassoso : public Liquido {
public:
    void stato()  {
        cout << "psssiiii!" << std::endl;
    }
};

int main() {
    
    Acqua* l = new Liquido();
    Acqua* g = new Gassoso;
    l->stato();
    g->stato();
    
    
 
    
    return 0;
}
