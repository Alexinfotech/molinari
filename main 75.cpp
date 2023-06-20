#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
const int n=7;   
int i,j,T[n];
int d;

srand(time(0));
for(i=0;i < n;i++)
if(!i)T[i]=rand()%10;
else do{
     d=0;
     T[i]=rand()%10;
     for(j=0;j < i;j++)
          if(T[i]==T[j])d=1;
}while(d);

for(i=0;i < n;i++)cout << T[i];
}