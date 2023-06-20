#include"vettore.h"

vettore::vettore(){
        int dim;
        int* v;
        int i;
        int s;
        int m;
        int p;
        int max;
        int min;
       

}
vettore::vettore( int dim){   
    dim; 

}
 
    void vettore::insDim(int dim){
        this->dim=dim;
}
     int vettore::getDim(){
        return dim;
        
}
 void vettore::carica(){
	    v=new int [dim];
	for (int i = 0; i<dim; i++){		
		*(v+i);
		    cout<<"Inserisci un valore: ";
		cin>>*(v+i);}
}
void vettore::stampa(){
    
    for(int i = 0; i < dim ; i++){
            cout<<"in posizione "<<i<<" si trova "<<*(v+i)<<endl;}
}
void vettore::med(){
    int m;{
        m=s/dim;
            cout<<"La media dei valori inseriti e': "<<m<<endl;}
}
void vettore::somma(){
   s=0;
    for(int i = 0; i < dim; i++ ){
     s+=*(v+i);}
{ 
            cout<<endl<<"La somma dei valri inseriti e': "<<s<<endl;}
}
void vettore::MAX_MIN(){
        for (i=0;i<dim;i++) 
{ 
        if (i==0) 
{ 
    min=*(v+i); max=*(v+i); 
} 
        if (*(v+i)<min) min=*(v+i);
        if (*(v+i)>max) max=*(v+i); 
}
            cout<<endl<<"Valore Minimo inserito = "<< min<<endl;
            cout<<"Valore Massimo inserito = "<< max<<endl;
}
void vettore::POS_MAX(){
    p=0; max=*(v+0);
        for (i=0; i<dim; i++){
  		    if(*(v+i)>max){
  max=*(v+i); p=i;}
}
	cout<<"\nNella cella numero  "<<p<< " si trova il valore massimo = "<<max<<endl;
}
void vettore::POS_MIN(){
    p=0; min=*(v+0);
        for (i=0; i<dim; i++){
  		    if(*(v+i)<min){
  min=*(v+i); p=i;}
}
	cout<<"Nella cella numero  "<<p<< " si trova il valore minimo = "<<min<<endl;
}
