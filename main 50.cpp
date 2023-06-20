/*con la regola di eredarità, si gestisce il contenuto della classe padre,in quanto:
il metodo privato non viene trasferito
regola publica; l'eredarità rimane ivarita
regola protected; l'eredarità pubblica diventa protetta, l'eredarità protetta diventa privata
regola privata; l'eredarità pubblica e protetta diventa privata  
*/#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    int a;
    
    A(): a(56), z(" io sono una stringa protected class A "),p(" stringa privata\n") {cout<<a<<" <-sono il padre\n"<<z<<p<<endl;};
    
    protected://cambaindo in privato, e stambilendo la regola di passaggio in protected A, non passa come eredarietà
    string z;
    private:
    string p;
   
};
class B: public A{// alternativa protected--private. tutto scende di un grado,ora con regola public  l'eredetarietà di class A  rimane invaria
    public:
    
    string b;
    B(): b("Buongiorno sono una stringa classe B ") {cout<<b<<a<<z<<" <-sono il figlio\n"<<endl;};
};
class C: public B{
    public:
    int c;
    C(): c(127) {cout<<c<<" "<<a<<z<<b<<" <-sono il nipote\n"<<endl;};
};
int main()
{
    cout<<"CLASS A\n";
    A a1;
    //cout<<a1.z<<endl;
    cout<<"CLASS B\n";
    B b1;
    b1.a= 12;
    cout<<"CLASS C\n";
    C c1;
    c1.a= 19;
    c1.b="stringa di classe B modificata da oggetto c1 ";
    cout<<"MAIN\n";
    //b1.a=7;
    //c1.a=8;
    
    cout<<b1.a<<" <-sono il figlio e stampo l'eredità acquisita class A"<<endl;
    cout<<c1.a<<endl;
    cout<<c1.b<<" <-sono il nipote e stampo l'eredità acquisita da class B"<<endl;
    cout<<c1.a<<" <-sono il nipote e stampo l'eredità acquisita da class A"<<endl;
    cout<<"Hello World";

   
}

