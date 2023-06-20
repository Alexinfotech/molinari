/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ char regione[20];
    
    
    int *v;
    FILE *fp;
    v = NULL;
   
    fp=fopen("RICEVUTA","a");
    v = new int[6];
    for(int i = 0; i < 6; i++){*(v + i) = rand()%98;}
    for(int i=0;i < 6;i++){fprintf(fp,"%d\n",*(v+i));}
   

    return 0;
}
