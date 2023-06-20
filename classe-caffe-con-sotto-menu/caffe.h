using namespace std;
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define N 1



class caffe{

public:

    caffe();
   
    
    void pop_caffe();
    void pop_the();
    void pop_latte();
    void push_monet(int num);
    void pop_monet();
    
    void stampa_caffe();
    void stampa_the();
    void stampa_latte();
    
private:
 
    int spc;
    int spt;
    int spl;
    int mon;
    int i;
    int o;
   
    
    int stack[];
 
};