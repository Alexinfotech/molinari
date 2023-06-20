typedef struct nodo
    {
        int data;
        struct nodo* next;
    } branch;
typedef branch* lista;

void push(lista& testa, int num);
void popPari(lista& testaPari, lista& ind);
void popDispari(lista& testaDispari, lista& ind);
void print_list(lista& testa, lista& ind);
void print_listPopPre(lista& testa, lista& ind);
void print_listPopPost(lista& testa, lista& ind);