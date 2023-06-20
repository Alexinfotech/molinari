#include <iostream>
using namespace std;
void swap(int x, int y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}
void swapIndirizzo(int *x_ptr, int *y_ptr)
{
 int temp;
 temp = *x_ptr;
 *x_ptr = *y_ptr;
 *y_ptr = temp;
}
int main()
{
 int n1=3,n2=5;
 swap(n1,n2);
 cout<<n1<<" "<<n2<<endl;
/*
I valori di n1 ed n2 non risultano scambiati. Questo accade perché la funzione swap agisce solo
su una copia delle variabili n1 e n2 Per far sì che la funzione agisca sulle variabili stesse e non su
delle copie occorre passare gli indirizzi
*/
 swapIndirizzo(&n1,&n2);
 cout<<n1<<" "<<n2<<endl;
 return 0;
} 