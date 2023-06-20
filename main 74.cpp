/******************************************************************************
esercizio per risolvere semplici equazioni di secondo grado
prova dati 
1, 2, -8=risultato esatto
1, 5, 9=impossibile risultato esatto


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ 
    int a;//x2
    int b;//x
    int c;//1
    int a2;
    int delta4;
    int delta3;
    int delta2;
    int deltaRad;
    int delta;
    int x1;
    int x2;
printf("calcolo equazione secondo grado\n");    

printf("inserisci primo memmbro x2:\n");
scanf("%d", &a);

printf("inserisci secondo memmbro compreso di segno x:\n");
scanf("%d", &b);

printf("inserisci terzo memmbro compreso di segno :\n");
scanf("%d", &c);

printf("l'eqazione di secondo grado che vuoi calcolare è \n (%dx2)+(%dx)+(%d)",a,b,c);
//passaggi per trovare il delta
 delta4=(4*a);
 delta3=(delta4*c);
 delta2=(b*b);
 delta=(delta2-delta3);
 a2=(a*a);
 printf("passaggi è:\n -4(ac)= %d\n 2b= %d\n delta= %d\n",delta3,delta2,delta);
 if(delta > 0){//se il delta è negativo blocca il calcolo percè impossibile
    deltaRad=sqrt(delta);//delta sotto radice
}
else{
    printf("\nl'equazione è impossibile %d IL DELTA è NEGATIVO",
    delta);
    return 0;
}
//calcolo per trovare x1 x2
 x1=(-b+deltaRad/a2);
 x2=(-b-deltaRad/a2); 
  printf("il risultatoo dell'equazione è:\n x1:%d\n x2:%d\n",x1,x2);
 //controprova risultati
//  printf("passaggi è:\n delta3%d\n delta2%d\n delta1=%d:\n",delta3,delta2,deltaRad);

return 0;
}

