/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <string>
#include <iostream>

class Persona {
public:
  Persona(std::string nome, std::string cognome, int eta) 
    : m_nome(nome), m_cognome(cognome), m_eta(eta) {}

  std::string getNome() const { return m_nome; }
  std::string getCognome() const { return m_cognome; }
  int getEta() const { return m_eta; }

protected:
  std::string m_nome;
  std::string m_cognome;
  int m_eta;
};

class Tutore : public Persona {
public:
  Tutore(std::string nome, std::string cognome, int eta) 
    : Persona(nome, cognome, eta) {}
};

class Conducente : public Persona {
public:
  Conducente(std::string nome, std::string cognome, int eta, std::string patente, int anniPatente) 
    : Persona(nome, cognome, eta), m_patente(patente), m_anniPatente(anniPatente) {
      if (eta < 18) {
        m_tutore = new Tutore("", "", 0);
      } else {
        m_tutore = nullptr;
      }
    }

  Conducente(std::string nome, std::string cognome, int eta, std::string patente, int anniPatente, Tutore* tutore) 
    : Persona(nome, cognome, eta), m_patente(patente), m_anniPatente(anniPatente), m_tutore(tutore) {}

  ~Conducente() {
    delete m_tutore;
  }

  std::string getPatente() const { return m_patente; }
  int getAnniPatente() const { return m_anniPatente; }

  Tutore* getTutore() const { return m_tutore; }

private:
  std::string m_patente;
  int m_anniPatente;
  Tutore* m_tutore;
};

int main() {
  Conducente conducenteMinorenne("Luigi", "Verdi", 16, "B123456", 1, new Tutore("Paolo", "Neri", 30));
  Conducente conducenteMaggiorenne("Mario", "Rossi", 30, "A654321", 5);

  if (conducenteMinorenne.getTutore() == nullptr) {
    std::cout << "Conducente minorenne: " << conducenteMinorenne.getPatente() << std::endl;
  } else {
    std::cout << "Conducente minorenne: " << conducenteMinorenne.getPatente() << " (affiancato da " << conducenteMinorenne.getTutore()->getNome() << " " << conducenteMinorenne.getTutore()->getCognome() << " - " << conducenteMinorenne.getTutore()->getEta() << " anni)" << std::endl;
  }

  std::cout << "Conducente maggiorenne: " << conducenteMaggioren
