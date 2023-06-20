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

class Conducente : public Persona {
public:
  Conducente(std::string nome, std::string cognome, int eta, std::string patente, int anniPatente) 
    : Persona(nome, cognome, eta), m_patente(patente), m_anniPatente(anniPatente) {}

  std::string getPatente() const { return m_patente; }
  int getAnniPatente() const { return m_anniPatente; }

private:
  std::string m_patente;
  int m_anniPatente;
};

int main() {
  Persona persona("Mario", "Rossi", 35);
  Conducente conducente("Luigi", "Verdi", 28, "B123456", 5);

  std::cout << persona.getNome() << " " << persona.getCognome() << " (" << persona.getEta() << " anni)" << std::endl;
  std::cout << conducente.getNome() << " " << conducente.getCognome() << " (" << conducente.getEta() << " anni) - Patente: " << conducente.getPatente() << ", Anni di patente: " << conducente.getAnniPatente() << std::endl;

  return 0;
}
