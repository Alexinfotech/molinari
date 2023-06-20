#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int dim;
        int* v;
    cout<<"inserisci dim: ";
    
        cin>>dim;
        
            v=new int [dim];
                for(int i=0; i<dim; i++){
    *(v+i)=rand()%100;
    cout<<"in posizione"<<i<<"si trova "<<*(v+i)<<endl;
                    
}

  delete []v; 


    return 0;
}

