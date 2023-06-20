/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    

    FILE *fp;
   
    
    char R[60];
    
    
fp=fopen("Ricevuta","w"); 
printf("Su quale ruota vuoi giocare i numeri?");
scanf("%s", &R[255]);
printf("%s",&R[255]);
fprintf(fp,"Sulla ruota di %s hai giocato questi numeri",&R[255]);

    return 0;
}


