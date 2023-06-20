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
    void insDim(int dim);
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
    int spc;
    int spt;
    int spl;
    int mon;
    int coin;
    int i;
    int dim;
    int stack[];

};