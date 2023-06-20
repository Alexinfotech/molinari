
#include <iostream>

using namespace std;

class A{
       
    public:
            A();  
             ~A(){cout<<"arrivederci\a";
};
    int c;
};
            A::A(){cout<<"benvenuto\t"; 
            c=5;
        };

    int main()
{

        int d;

            A x;
            cout<<"\t"<<x.c;
            cout<<"\t"<<sizeof(x)<<"\t";
            cout<<"Hello World\n";

return 0;
}


