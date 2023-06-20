#include <iostream>
using namespace std;

int main() {

	int n, N, div=1, conta=0, contaprimi=0, i=0;
	
	do{
    	        cout<<"Quanti numeri vuoi inserire? : \t";
		cin>>N;
	} while (N<=0);
    
        for(i=0;i<N;i++) {
    	        cout<<"inserisci un numero: ";
    	        cin>>n;
    	        while(conta<3 && div<=n/2) {
			if(n%div==0)  
				conta++;	
			div++;
		}
		if (conta==1)
			contaprimi++;
		conta=0;
		div=1;
	}
    
	cout<<"I numeri primi inseriti sono: "<<contaprimi;
	
	return 0;	
}