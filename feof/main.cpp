
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
	FILE *fp;
	char cognome[20];
	char nome[20];
	int voto;
	
        fp = fopen("alunni.txt", "rt");
	if(!fp) {
		printf("Errore nell'apertura del file");
		exit(1);
	}

	while(!feof(fp)){
		fscanf(fp,"%s %s %d\n", cognome, nome, &voto);
		printf("cognome: %s, nome: %s, voto: %d\n", cognome, nome, voto);
	}
	fclose(fp);
	
return 0;
}