#include <iostream>
using namespace std;

 class persona {
     
          public:
           
            persona();
            string cognome;        
            string nome;  
            int stipendio;
            ~persona(){ cout << "distruggi oggetto\a";
         
};

    int A;

};
            persona::persona(){cout<<"anagrafe\n"; 
       
   
};    

    int main() {
    
            persona Obj;
            Obj.cognome = "Tornabene";
            Obj.nome = "Alex";
            Obj.stipendio = 3500;


   
            cout <<     "cognome:"      <<   Obj.cognome; 
            cout <<     "\nnome:"       <<   Obj.nome; 
            cout <<     "\nstipendio:"  <<   Obj.stipendio  <<"\n";
return 0;
}



