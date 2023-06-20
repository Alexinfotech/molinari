using namespace std;
#include <iostream>
#include <stdio.h>


class pilaStk {
    
public:
    pilaStk();//costruttore senza parametri
    void insDim(int dim);
    int getDim();
    void push(int num);
    int pop();
    void visualizza();
        
        
        
private:
    int *v;//puntatore dim
    int *s;//puntatore sp
    int dim;
    int sp;
    int stack[];
};