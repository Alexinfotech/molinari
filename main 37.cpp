/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
    int a;//x2
    int b;//x
    int c;//1
    
    int delta3;
    int delta2;
    int delta1;
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

//printf("inserisci il primo lato:");
//scanf("%f", &c);
 delta3=(4*a);
 delta2=(delta3*c);
 delta=(b*b-delta2);
 
 if(delta < -1){
    delta1=sqrt(delta);
}
else{
    printf("\nl'equazione è impossibile");
    return 0;
}

 x1=(-b+delta1/2);
 x2=(-b-delta1/2); 
  printf("il risultatoo dell'equazione è:\n x1:%d\n x2:%d\n %d:\n",x1,x2,delta);
 
 
 
    
/*printf("perimetro area e ipotenusa di un triangolo:\n");
printf("inserisci  base triangolo:");
scanf("%f", &a);
printf("inserisci altezza triangolo:");
scanf("%f", &b);
//printf("inserisci il primo lato:");
//scanf("%f", &c);
//printf("il triangolo specificato ha i lati lunghi %f, %f e %f\n",
     //  a,b,c);
    float c1;
    float c2;
    float c3;
c1=sqrt(a*a + b*b);//ipotenusa
c2=(a+b+c1);//perimetro
c3=(a*b/2);//area
//if(fabsc-c1)<0.00001) calcolo al millesimo
/*if(c == c1)
{
printf ("il triangolo è rettangolo\n");}
else
{
printf("il triangolo non è rettangolo\n");}

/*if(fabs(c-c1)<0.00001) 
{
printf ("il triangolo è rettangolo\n");}
else
{
printf("il triangolo non è rettangolo\n");}
printf("lipotenusa del triangono è:%f\n",
       c1);
printf("il perimetro del triangono è:%f\n",
       c2);
printf("l'area del triangono avendo base %f e altezza %f é:%f\n",
       a,b,c3);*/
return 0;
}