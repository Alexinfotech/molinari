#include <stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;    
        

  int main(){

    int*** v;
    FILE *fp_out;
    int dato;
    v = NULL;
    fp_out = NULL;
    fp_out=fopen("ARRAY.txt","w");
  
       v = new int**[10];
      *v= new int*;
     **v= new int;
    
    for(int i=0; i<10; i++){*(v+i);}
    fprintf(fp_out,"indir partenza--array-%p\n",*v);
    fprintf(fp_out,"indir partenza--heap-%p\n\n",&*v); 
    for(int i=0;i< 10;i++){fprintf(fp_out,"dato-%d\n",i),fprintf(fp_out,"indir--area-memoria-array-%p\n",*v+i),fprintf(fp_out,"*v-indir--heap-%p\n",&*(v+i)),
    fprintf(fp_out,"**v-indir--heap--%p\n",&**v+i),fprintf(fp_out,"***v-indir--heap--%p\n",&***v+i),fprintf(fp_out,"area--di-memoria-array-%p\n\n",***v+i);}
    fclose(fp_out);

    return 0;


    
}
