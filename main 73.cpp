/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class FRAZIONE
{

//Zona friend, le funzioni qui sotto non appartengono alla classe ma possono accedere a tutti i suoi membri e possono //richiamare tutte le sue funzioni

friend istream& operator >> (istream& cin, FRAZIONE& fraz);
friend FRAZIONE operator + (FRAZIONE f, FRAZIONE g);
friend bool operator > (FRAZIONE f, FRAZIONE g);

private:
int num,den;    //Queste due variabili le possiamo definire come variabili di stato della classe. Immaginate una frazione, la
                    //frazione, da cosa e caratterizzata e definita? Da un numeratore e un denominatore, quindi una volta
//determinate le variabili che meglio definiscono lo stato della classe bisogna dichiararle qui, nell'area private

public:
FRAZIONE(); //Costruttore, per inizializzare a determinati valori il numeratore e denominatore di ogni frazione
//che dichiareremo

FRAZIONE() //Costruttore
{
num=0; //Ovviamente ha senso inizializzare una frazione a numeratore 0 e denominatore 1, cosi che il valore
den=1; //reale della frazione sia 1
}

istream& operator >> (istream& cin, FRAZIONE& fraz) //C'e poco da capire su questa riga, per ridefinire l'operatore cin
{ //bisogna scrivere questo, consiglio: impararlo a memoria
cout<<"\n\n";
cout<<"\n\t Inserire il numeratore ";
cin>>fraz.num;

cout<<"\n\t Inserire il denominatore ";
cin>>fraz.den;

while(fraz.den==0) //Piccolo controllo, se il denominatore fosse 0 la frazione risulterebbe senza senso
{
cout<<"\n\t Una frazione non puo avere denominatore 0, reinserire il denominatore \n\n\t ";
cin>>fraz.den;
}

//fraz.Riduci(); Eventualmente se avessimo un metodo riduci lo richiameremo qui

return cin;
}
FRAZIONE operator + (FRAZIONE f, FRAZIONE g) //Operatore somma
//Ridefinendo l'operatore somma "+" quando utiliziamo l'operatore somma con 2 oggetti frazione modificheremo il
//funzionamento stesso del "+" ovvero cio che adesso fara sara cio che li difemmo di fare qua sotto
{
FRAZIONE h; // c=a+b, guardiamo gli argomenti della funzione, abbiamo a(FRAZIONE f) e b(FRAZIONE g), c non lo
// abbiamo, dobbiamo quindi dichiararlo

//Procedimento per poter fare una somma tra due frazioni
h.den=f.den*g.den;

h.num=((h.den/f.den*f.num)+(h.den/g.den*g.num));

//h.Riduci(); //Eventuale richiamo di una funzione riduci

return h; //Il risultato della somma e contenuto nella frazione h, possiamo quindi restituirla
}
bool operator > (FRAZIONE f, FRAZIONE g) //Pensiamo a come operano gli operatori relazionali. Essi si usano per poter
{//fare una confronto, e il risultato di un test come sappiamo puo assumere 2 valori, vero o falso. Un operatore relazionale
//dovra quindi restituire come risultato o vero o falso, quindi restituira una variabile di tipo booleana. Ovviamente vale lo
//stesso discorso fatto per l'operatore "+", ovvero quando utilizzeremo l'operatore ">" per confrontare 2 oggetti frazione
//il funzionamento dell'operatore cambia, e fara esattamente cio che noi li diremmo di fare qua sotto.

float a,b;
a=b=0;

//Ovviamente una frazione rappresenta un numero, per poter conoscere il valore di tale numero sara necessario dividere
//il numeratore per il denominatore.
a=f.num/f.den;
b=g.num/g.den;

//Una volta che conosciamo il valore delle due frazioni bastera fare un confronto. Se la prima frazione e maggiore della
//seconda allora il risultato del test sara vero, e ritorneremo quindi vero, altrimenti se le 2 frazioni sono uguali, o la prima e //minore della seconda restituiremo falso.

if(a>b)
return true;
else
return false;
}
}

void main()
{
FRAZIONE a,b,c; //Dichiariamo le nostre tre frazioni.

cin>>a; //Il cin>> essendo stato ridefinito per l'utilizzo con un oggetto frazione eseguira le istruzioni che abbiamo //specificato in precedenza
cin>>b;

c=a+b; //Come per il cin>> anche l'operatore "+" e stato ridefinito, quando quindi lo useremo con 2 oggetti frazione il suo
//funzionamento fara riferimento alla funziona da noi scritta in precedenza.

if(a>b) //Idem per la somma e il cin, l'operatore ">" eseguira le istruzioni scritte nella funzione che lo ridefinisce
cout<<"La frazione "a" e maggiore della frazione" "b";
}

