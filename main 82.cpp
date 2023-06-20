#include <iostream>
using namespace std;
int main()
{
 int x,y;
 int *p1,*p2;
 x = 23;
 y = 15;
 p1 = &x;
 p2 = &y;
 cout<<*p1<<" "<<*p2;
 return 0;
} 
