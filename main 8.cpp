#include <iostream>
#include <cstdlib>
using namespace std;

const int seme1 = 111222333; 
const int seme2 = 112233444; 

#define N 1

int main(){
	int a[N],b[N];
	int i;

	srand(seme1);
	for (i=0; i<N; i++){		
		a[i]=rand();
	}
	
	srand(seme2);
	for (i=0; i<N; i++){
		b[i]=rand();
	}		
	
	cout<<"stampa primo array"<<endl;
	for (i=0; i<N; i++){		
		   cout<<a[i]<<endl;
	}
		
	cout<<"stampa secondo array"<<endl;
	for (i=0; i<N; i++){		
		   cout<<b[i]<<endl;
	}
	return 0;	
}
