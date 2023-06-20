using namespace std;

class pila {
    public:
        pila(int dim);
        void push(int num);
        int pop();
        void visualizza();
    private:
        int dim, sp, stack[];
};