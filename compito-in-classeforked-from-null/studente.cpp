#include <iostream>
#include "lib.h"

using namespace std;



Studente::Studente(string nome, string cognome) {
    
    this->nome = nome;
    this->cognome = cognome;
    v=new int [voto];
    
    for(int i = 0; i < 10; i++) {
       *(v+i) = -1;
    }
    ultimo = -1;
};

void Studente::setVoti(int voto) {
    
    c=new int[curr];
    if(curr < 10) {
        voti[curr] = voto;
        ultimo = voto;
       curr++;
        dcurr++;
    }else {
        cout<<"Non e' possibile inserire altri voti."<<endl;
    }
};

void Studente::getVoti() {
    
    
    if(curr == 0) {
        cout<<endl<<"Non ci sono voti da visualizzare."<<endl;
    }else {
        cout<<endl<<"I voti sono:"<<endl;
        for(int i = 0; i < curr; i++) {
            cout<<endl<<voti[i];
        }
    }
};

void Studente::mediaVoti() {
    cout<<endl<<"Nome: "<<getNome()<<endl<<"Cognome: "<<getCognome()<<endl;
    for(int i = 0; i < curr; i++) {
        temp = temp + voti[i];
    }
    media = temp / dcurr;
    cout<<"La media dei voti e': "<<media<<endl;
    getVoti();
};

string Studente::getNome() {
    return nome;
};

string Studente::getCognome() {
    return cognome;
};