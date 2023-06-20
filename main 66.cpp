/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
int n, div=1, conta=0;
		
	do {
		cout<<"inserisci un numero: ";
                cin>>n;		
	} while (n<1);
    
	while(conta<=1 && div<=n/2) {
		if(n%div==0)  
{
 //se trova divisori incrementa il contatore dei divisori
			conta++;
                }	
		div++;
	}
	
	if (conta==1)
{
	   cout<<"Il numero e' primo\n ";
	} else
 {
	   cout<<"Il numero non e' primo\n ";
	
}
	return 0;	
}
