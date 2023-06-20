#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

int variabileCondivisa = 0;
sem_t bufferVuoto;
sem_t bufferPieno;
pthread_mutex_t possoAccedere;

void *produttore (void *parametro) {
  int conta = 0;
  while (conta < 10) {
    sem_wait(&bufferVuoto);
    pthread_mutex_lock(&possoAccedere);
    variabileCondivisa = ++conta;
    printf("Prodotto: %d\n", variabileCondivisa);
    pthread_mutex_unlock(&possoAccedere);
    sem_post(&bufferPieno);
  }
  pthread_exit(0);
}

void *consumatore (void *parametro) {
  int conta = 0;
  while (conta < 10) {
    sem_wait(&bufferPieno);
    pthread_mutex_lock(&possoAccedere);
    conta = variabileCondivisa;
    variabileCondivisa = 0;
    printf("Consumato: %d\n", conta);
    pthread_mutex_unlock(&possoAccedere);
    sem_post(&bufferVuoto);
  }
  pthread_exit(0);
}

int main() {
  pthread_t produci;
  pthread_t consuma;
  sem_init(&bufferVuoto, 0, 1);
  sem_init(&bufferPieno, 0, 0);
  pthread_mutex_init(&possoAccedere, NULL);
  pthread_create(&produci, NULL, produttore, NULL);
  pthread_create(&consuma, NULL, consumatore, NULL);
  pthread_join(produci, NULL);
  pthread_join(consuma, NULL);
  sem_destroy(&bufferVuoto);
  sem_destroy(&bufferPieno);
  pthread_mutex_destroy(&possoAccedere);
  return 0;
}