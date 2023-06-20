/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
pid_t pid;
pid = fork();
if(pid==0){//sono il figlio
    printf("sono il figlio di troia %d, mio padre e %d\n"getpid(),getppid());
        int risultato =5*2;
        int b = 0;
        risultato=risultato\b;
        exit(risultato);
}else if (pid>0){//sono il poadre
int status;
wait(&status);
if (WIFEXITED(status)){
    printf("il valore passatpo è: %d\n", WEXITSTATUS(status));
    printf("il risuktato di 5*2 = %d",status);
}(
 else if (WIFSIGNALED)(y){
     psignal(wtermsig(y),"si e verificato un problema");
     printf("lo status e=%d",status);
 }
    printf("sono il padre del figlio di troia %d, mio padre e %d\n"getpid(),getppid());
}else{ //errore
}

}
