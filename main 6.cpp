/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){// char **argv lista di stringhe
cout<<argc<<endl;
for(int i=0;i<argc;i++)
cout<<argv[i]<<endl;

    return 0;
}
