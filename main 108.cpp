#include <cstdlib>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h>

using namespace std;

int postidisp=10;
pthread_mutex_t sema1;
__thread const char* thread_name;

void *cassa(void *arg) {
int p;
printf("Sono nel thread cassa \n");
pthread_mutex_lock(&sema1);
thread_name = __FUNCTION__;
//printf("thread name = %i\n", (int *)arg);
p=1+(rand()%3);
if(postidisp>0&&postidisp>p) {
postidisp-=p;
printf("Posti liberi %d\n",postidisp);
printf("Posti prenotati %d\n",p);
}else {
printf("Posti non disponibili \n");
printf("Posti liberi %d\n",postidisp);
printf("Posti prenotati %d\n",p);
}
pthread_mutex_unlock(&sema1);
pthread_exit(0);
}

int main(int argc, char** argv) {
    int i;
thread_name = __FUNCTION__;
pthread_t t1[5];

pthread_mutex_unlock(&sema1);

for(i=0;i<5;i++)
pthread_create(&t1[i],NULL,&cassa,(char *)&i);

for(i=0;i<5;i++)
pthread_join(t1[i],NULL);
printf("Original thread name: %s\n", thread_name);

return 0;
}



