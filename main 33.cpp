
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* classe file
creo due eccezioni,
1 se non trova il file
2 se trova il file vuoto
*/
classe file{
    public:
file();//costruttore
int apetura_file();//apertura file in lettura
void stampa_file();//stampa contenuto file

private:
int contenuto;
FILE* p;
};
file::file(){
}
int::file apertura_file(){
    FILE* p = fopen("testo.txt", "r");
        if(!p){
            throw"";//sollevo l'eccezione se non trova il file 
        return 1;
        }
        contenuto=fgetc(p);
        if (contenuto == EOF) {//EOF fine del FILE per segnalare che non 
        //ci sono piu dati da leggere 
            throw"";//sollevo eccezione se non trova contenuto file 
        return 2;
        }   
}
void file::stampa_file(){
    cout << "Contenuto del file: " << endl;
        while (contenuto != EOF) {
            cout << (char)contenuto;//stampa il contenuto trovato nel file test.txt
            contenuto = fgetc(p);    } 
    }
}




