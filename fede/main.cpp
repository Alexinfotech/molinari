/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "persona.h"
using namespace std;
int main()
{
    persona obj;
    obj.setNome("mario");
    obj.setCognome("rossi");
    obj.setStipendio(1450);
    obj.stampa();
    return 0;
}
