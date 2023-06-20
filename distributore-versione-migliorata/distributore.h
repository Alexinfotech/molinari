using namespace std;
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
//include <cstdio.h>
#define N 1

class distributore{

public:
    
    distributore();
    void presentazione();
    void menu();
    void errore1_2();
    void moneta();
    void errore_mon();
    void cambio_idea();
    void ins_errore();
    void ins_errore_2();
    void stampa_ticket();
    void ins_Dim(int dim);
    void pop_caffe();
    void pop_the();
    void pop_latte();
    void push(int coin);
    void pop_monet();
    void stampa_caffe(char crea);
    void stampa_the(char crea);
    void stampa_latte(char crea);
    void stampa(char crea);
    void ticket();
    
private:
    
    char crea;
    int temp;
    int n;
    int spc;
    int spt;
    int spl;
    int mon;
    int coin;
    int i;
    int dim;
    int stack[];

};