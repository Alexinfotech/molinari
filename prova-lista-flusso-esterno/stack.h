typedef struct nodo
    {
        int data;
        struct nodo* next;
    } branch;

typedef branch* lista;

void push(lista& testa, int num);
void pop(lista& testa, lista& temp);
void print_list(lista& testa, lista& temp);