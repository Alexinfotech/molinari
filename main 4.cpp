#include<iostream>
using namespace std;

int main(){

int dim;
int x;
 cout<<"inserisci dim";
    
        dim=100;
 //x=new char [dim];

cout << " **** CODICE ASCII ESTESO (8 bit)   \n\n";
	srand(time(NULL));
for( int i=48; i<dim; i++ ) {
     x=rand()%100;
		
cout << " Codice: " << i <<endl; 
		

	
cout << " Carattere: " << x << " \n ";

}

return 0;
}
