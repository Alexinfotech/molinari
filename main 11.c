
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


	int main(){
	    int x, y,z,k;
	    int ris_figlio;
	pid_t pid=fork();
    int status;
    
	if (pid>0) 
	{
	    k = 5 * 7;
	    x = 5 + 3;
	    wait(&status);
	    ris_figlio=status/256;
	    z = k + x-ris_figlio;
	    printf("z = %d",z);
	}
	else if (pid==0) 
	{
	    y = 4 * 2;
	    exit(y);
	}
	else
	{
	    printf("si è verificato un errore nella chiamata a fork.\n");
	}
	
	
	return(1);

}
