#include "forma.h"
int main()
{
FILE *fp;
double lato,raggio;

if((fp=fopen("Dati_quadrato.txt", "a"))==NULL) 
	{
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	cout << "Inserisci la lunghezza del lato";
	cout << "la lunghezza deve esser compresa tra 20 e 100--> ";
	cin >> lato;
    if(lato < 20 || lato > 100) {
    cout<<"hai digitato una quantità inadeguata";        
    }
    cout << "Inserisci la lunghezza del raggio";
	cout << "la lunghezza deve esser compresa tra 10 e 50--> ";
	cin >> raggio;
    if(raggio < 10 || raggio > 50) {
    cout<<"hai digitato una quantità inadeguata";
    }
Quadrato q(lato); // Utilizzo del costruttore con un parametro di tipo int
cout << "Perimetro del quadrato: ";
q.perimetro();
cout << "Area del quadrato: ";
q.area();
Cerchio c(raggio);
cout << "Perimetro del cerchio: ";
c.perimetro();
cout << "Area del cerchi: ";
c.area();
fprintf(fp,"              Lato                Perimetro               Area \n");
fprintf(fp,"Quadrato ->   %0.2f           %0.2f              %0.2f \n", lato, q.perimetro(), q.area());
fprintf(fp,"Cerchio ->    %0.2f           %0.2f              %0.2f \n", lato, c.perimetro(),c.area());
fclose(fp); 

return 0;
}