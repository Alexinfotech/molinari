/* AND -> a && b = confronto
   OR -> a || b = o un altro caso
   NOT -> ! a = 
#include <stdio.h>
#include <stdlib.h>

int main(){
/*leggi i valori di a,b,c  */
float a,b,c;

    printf("inserisci a: ");
     scanf("%f", &a);
    printf("inserisci b: ");
     scanf("%f", &b);
    printf("inserisci c: ");
     scanf("%f", &c);
     
    if(  (a>0 && b>0 && c>0) ||
         (a<0 && b<0 && c<0) )
        {
         printf("stesso segno\n");
    }         
    else 
        {
             printf("segno diverso");
        }
         
    return 0;
}