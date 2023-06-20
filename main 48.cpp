#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
    float a;//base
    float b;//altezza
    float c;
    float c1;
    //float c;//ipotenusa acquisita da calcolo
printf("trova il triangolo:\n");
printf("inserisci  primo lato:");
scanf("%f", &a);
printf("inserisci secondo lato:");
scanf("%f", &b);
printf("inserisci terzo lato:");
scanf("%f", &b);
printf("il triangolo ha i lati lunghi %f, %f e %f\n",
       a, b, c);
       c1=sqrt(a+a + b+b);
    if(c==c1){
        printf("il trangol è rettangolo\n");
       }
    else{
        printf("il triangolo non è rettangolo\n");
        }
       
return 0;
}