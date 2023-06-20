#include "forma.h"
int main()
{
FILE *fp;
int lato;

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
  
Quadrato q(lato); // Utilizzo del costruttore con un parametro di tipo int
cout << "Perimetro del quadrato: ";
q.perimetro();
cout << "Area del quadrato: ";
q.area();

fprintf(fp," %d           %d              %d \n", lato, q.perimetro(), q.area());
fclose(fp); 

return 0;
}