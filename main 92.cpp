#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define N 1000

int main(){
	int a[N],b[N];
	int i;
//	char c;

	srand(time(NULL));
	for (i=0; i<N; i++){		
		a[i]=rand()%26;
	}
	
	srand(time(NULL));
	for (i=0; i<N; i++){		
		b[i]=rand()%11+10;
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