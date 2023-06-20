/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<class T>// class T template
void stampa(vector<T> v) {//passo a vector class template generica
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {//SPECIALIZZO IL VECTOR NEL MAIN USANDO TEMPLATE CLASS T
    vector<int> v1 = {1, 2, 3, 7, 8};//specializzo vector   interi
    vector<double> v2 = {2.3, 4.5, 6.7};//specializzo vector   double
    vector<string> v3 = {"prova", "microfono"};//specializzo vector  stringa
//STAMPO VETTORI CON DIMENSUìOONE OCCUPATA E DIMENSIONE DINAMICA
//LA DIMENSIONE DINAMICA PRENDE VITA DOPO LA PUSH
    cout << "v1: ";
    stampa(v1);
    cout << "Dimx del v1: " << v1.size() << endl;
    cout << "capacità SENZA push v1 " << v1.capacity() << endl<<endl;
    cout << "v2: ";
    stampa(v2);
    cout << "Dimx del v2: " << v2.size() << endl<<endl;
    cout << "v3: ";
    stampa(v3);
    cout << "Dimx del v3: " << v3.size() << endl<<endl;
    
    v1.push_back(4);
    cout << "v1 push: ";
    stampa(v1);
    cout << "Dimx del v1: " << v1.size() << endl;
    cout << "capacità DOPO la push v1 " << v1.capacity() << endl<<endl;
    v1.push_back(9);
    cout << "v1 push: ";
    stampa(v1);
    v1.pop_back();
    cout << "v1 pop: ";
    stampa(v1);
     cout << "Dimx del v1: " << v1.size() << endl<<endl;
    
    v2.push_back(7.3);
    cout << "v2 push ";
    stampa(v2);
    v2.push_back(5.4);
    cout << "v2 push ";
    stampa(v2);
    cout << "Dimx del v2: " << v2.size() << endl<<endl;
    
   
    v3.push_back("-uno");
    cout << "v3 push ";
    stampa(v3);
    v3.push_back("-due");
    cout << "v3 push ";
    stampa(v3);
    v3.push_back("-tre");
    cout << "v3 push ";
    stampa(v3);
    cout << "Dimx del v3: " << v3.size() << endl<<endl;

  
    

    
    
       cout << "Dimx v1 " << v1.size() << endl;
       cout << "capacità dinamica v1 " << v1.capacity() << endl;
       cout << "Dimx v2 " << v2.size() << endl;
       cout << "capacità dinamica v2 " << v2.capacity() << endl;
       cout << "Dimx v3 " << v3.size() << endl;
       cout << "capacità dinamica v3 " << v3.capacity() << endl;

    return 0;
}
