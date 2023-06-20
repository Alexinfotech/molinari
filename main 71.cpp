/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <string>


class Persona {
public:
  Persona(string nome, string cognome, int dataNascita) :
    nome(nome), cognome(cognome), annoNascita(annoNascita) {}

  string getnome() {
      return nome; }
  string getcognome() {
      return cognome; }
  int getannoNascita()  { 
      return annoNascita; }
      
  /*    vvoid stampa() {//metodo stampa
        cout << "Nome : " << nome << "   ";
        cout << "Cognome : " << cognome << "   ";
        cout << "Anno nascita: " << annoNascita << endl;
      }*/ //FORSE LA STAMPA E MEGLIO METTERLA NEL MENU, per fare una classe più standardizzata per varie applicazioni.. 
      //quindi faremo un metodo esterno alla clsse

private:
  string nome;
  string cognome;
  int annoNascita;
};


class Conducente : public Persona {
public:
  Conducente(string nome, string cognome, int annoNascita,int numeroPatente, int annoAcquisizionePatente, int annoCorrente) :
    Persona(nome, cognome, annoNascita), numeroPatente(numeroPatente),
    annoAcquisizionePatente(annoAcquisizionePatente), annoCorrente(annoCorrente) {}

  int getnumeroPatente() {
      return numeroPatente; }
  int getannoAcquisizionePatnte() {
      return annoAcquisizionePatente; }
  int getannoCorrente() {
      return annoCorrente; }

private:
  int numeroPatente;
  int annoAcquisizionePatente;
  int annoCorrente;
};

//conducente tizio("Alessandro","Tornabene",1978,"1997",2023);
//cout<<tizio.getnome()<<tizio.getcognome()<<tizio.getannoNascita()<<tizio.getnumeroPatente()<<tizio.getannoAcquisizionePatnte()<<tizio.getannoCorrente()<<e

