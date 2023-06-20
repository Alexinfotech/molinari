/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *codice_thread(void* arg){
    pid_t pid;
    pid = getpid();
    pthread_t tid;
    tid = pthread_self();
    printf("1 %i %i\n",(int)tid,pid);
    
}

int main()
{
    pthread_t ptid;
     printf("2 %d\n",(int)getpid());
    pthread_create(&ptid,NULL,&codice_thread,NULL);
    sleep(1);

    return 0;
}

