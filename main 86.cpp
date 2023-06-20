#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

 int main(){
const int n=7;    
int i,T[n];

srand(time(0));
for(i=0;i < n; i++)T[i]=rand()%10;

for(i=0;i < n;i++)cout << " " << T[i];
}