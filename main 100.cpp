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
    float a;//base
    float b;//altezza
    //float c;//ipotenusa acquisita da calcolo
printf("perimetro area e ipotenusa di un triangolo:\n");
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
printf("il triangolo non è rettangolo\n");}*/
printf("lipotenusa del triangono è:%f\n",
       c1);
printf("il perimetro del triangono è:%f\n",
       c2);
printf("l'area del triangono avendo base %f e altezza %f é:%f\n",
       a,b,c3);
return 0;
}