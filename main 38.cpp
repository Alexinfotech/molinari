
#include <iostream>

using namespace std;

class A{
       
    public:
            A();//129 
            A(int b);//parametro 127
            A(string z);//sting z 
            A(int x,string y);//128 string y
            
            ~A(){cout<<"costruttore distrutto in serie"<<endl;//il costruttore come si vede dalla stampa parte 4 volte per ogni costruttore
             
};
    int c;
};
        A::A(int b){cout<<"primo costruttore con parametro int"<<endl<<b<<endl; //stampa paramentro  b
           
        c=5;}
        
        A::A(string z){cout<<"secondo costruttore con parametro string"<<endl<<z<<endl;}
        
        A::A(int d,string y){cout<<d<<y<<endl;};
        
    int main()
{

        int d;
      
            A obj1(127); //istanza oggetto  1//dato int b per parametro primo costruttore// 
            A obj2("secondo costruttore da main");//istanza oggetto 2//dato string z per parametro costruttore
            A obj3(128,"---terzo costruttore con parametro int/string");//istanza oggetto 3//dato int x string y per parametro terzo costruttore// 
            A obj4(129,"---costruttore senza parametri chiamato volutamente adopo i costruttori 1 2 3" );
            cout<<obj1.c<<endl;
            cout<<sizeof(obj1)<<endl;
            cout<<sizeof(obj2)<<endl;
            cout<<sizeof(obj3)<<endl;
            cout<<sizeof(obj4)<<endl;
            //cout<<"Hello World"<<endl;//distruttore

return 0;
}

