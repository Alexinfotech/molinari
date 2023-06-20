

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

float saldo;

void *conto() {
	int tipo;
	int importo;
	printf("Immetti tipo 1=Versamento, 2= Prelievo\n");
	scanf("%d", &tipo);
	printf("Immetti Importo\n");
	scanf("%d", &importo);
	if (tipo == 1) {
		saldo+=importo;
	} else {
		saldo-=importo;
	}
}

int main (int argc, char* argv[]) {
	pthread_t tid1, tid2, tid3, tid4;
	if (pthread_create(&tid1, NULL, &conto, NULL)!=0) printf("Errore thread 1\n");
	if (pthread_create(&tid2, NULL, &conto, NULL)!=0) printf("Errore thread 2\n");
	if (pthread_create(&tid3, NULL, &conto, NULL)!=0) printf("Errore thread 3\n");
	if (pthread_create(&tid4, NULL, &conto, NULL)!=0) printf("Errore thread 4\n");
	if (pthread_join(tid1,NULL)!=0) printf("Errore join 1");
	if (pthread_join(tid2,NULL)!=0) printf("Errore join 2");
	if (pthread_join(tid3,NULL)!=0) printf("Errore join 3");
	if (pthread_join(tid4,NULL)!=0) printf("Errore join 4");
	printf("Saldo=%g", saldo);
	return 0;
}