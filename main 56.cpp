/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
  class persona{

    private://impedire l'accesso dall'esterno
        string nome;
        string cognome;
        float stipendio;
        
    public:
        get Nome();
        set Nome();
        get Cognome();
        set Cognome();
        get Stipendio();
        set Stipendio();
       
    persona();//istanzia l'oggetto e le inizializza delle proprietà nome cognome e sstipendio
       
       cognome = "";
       nome = "";
       stipendio = 0;
    
    persona(string cognome);
    
        cognome = cog ;
        nome ="";
        stipendio = 0;
    
    persona(string cognome, string nome);
        
        cognome = cog;
        nome = nom;
        stipendio = 0;
        
    persona(string cognome,string nome,float stipendio);
        
        cognome = cog;
        nome = nom;
        stipendio = stip;
        
    persona(string cognome);
    nome = "";
    this cognome = cognome;
    stipendio = 0.0;
        
        
 

int main(){
    
    persona dip 1;
    persona dip 2("rossi");
    persona dip 3("bianchi","mario",2000.0); // cin cin
    
}
{
    cout<<"Hello World";

    return 0;
}
