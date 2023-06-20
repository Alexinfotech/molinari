#include <iostream>

using namespace std;

class Vettura {
public:
    virtual string Casa_Produtttrice() = 0;
    virtual string Modello() = 0;
    virtual string Cilindrata() = 0;
    virtual void data_immatricolazione() = 0;
    virtual string n_targa() = 0;
    virtual void accelerazione() = 0;
    virtual void frenata() = 0;
};
class Auto : public Vettura {
public:
    Auto(string marca, string modello, string cilindrata, int anno, string targa, int velocita, int frena,string n_porte) {
        this->marca = marca;
        this->modello = modello;
        this->cilindrata = cilindrata;
        this->anno = anno;
        this->targa = targa;
        this->velocita = velocita;
        this->frena = frena;
        this->n_porte = n_porte;
    }
    string Casa_Produtttrice(){
        cout << "Marca dell'auto: " << marca <<endl;;
        return marca;
    }
    string Modello(){
        cout << "Modello dell'auto: " <<  modello << endl;
        return modello;
    }
    string Cilindrata(){
        cout << "Cilindrata dell'auto: " << cilindrata <<endl;
        return cilindrata;
    }
    void data_immatricolazione(){
       cout << "Anno immatricolazione: " << anno << endl;
    }
    string n_targa() {
        anno = anno +5;
        cout << "Targa dell'auto: " << targa << endl;
        cout << "Anno prima revisione: " << anno << endl;
        return targa;
    }
    void accelerazione() {
        cout << "Velocità dell'auto: " << velocita << endl;
    }
    void frenata() {
        velocita = velocita - frena;
        cout << "Velocità dell'auto dopo la frenata: " << velocita << endl;
    }
    string porte(){
        cout << "L'auto ha " << n_porte << " porte" << endl;
        return n_porte;
    }
   
private:
    int frena;
    string marca;
    string modello;
    string cilindrata;
    int anno;
    string targa;
    int velocita;
    string n_porte;
};
class Furgone : public Vettura {
public:
    Furgone(string marca, string modello, string cilindrata, int anno, string targa, int velocita, int frena, int litri) {
        this->marca = marca;
        this->modello = modello;
        this->cilindrata = cilindrata;
        this->anno = anno;
        this->targa = targa;
        this->velocita = velocita;
        this->frena = frena;
        this->litri = litri;
        
    }
    string Casa_Produtttrice(){
        cout << "Marca dell'furgone: " << marca <<endl;;
        return marca;
    }
    string Modello(){
        cout << "Modello dell'furgone: " <<  modello << endl;
        return modello;
    }
    string Cilindrata(){
        cout << "Cilindrata dell'furgone: " << cilindrata <<endl;
        return cilindrata;
    }
    void data_immatricolazione(){
       cout << "Anno immatricolazione: " << anno << endl;
    }
    string n_targa() {
        anno = anno +4;
        cout << "Targa dell'furgone: " << targa << endl;
        cout << "Anno prima revisione: " << anno << endl;
        return targa;
    }
    void accelerazione() {
        cout << "Velocità dell'furgone: " << velocita << endl;
    }
    void frenata() {
        velocita = velocita - frena;
        cout << "Velocità dell'furgone dopo la frenata: " << velocita << endl;
    }
    void capienza(){
        cout << "La capienza del furogone è :" << litri << endl;
        
    }
private:
    int frena;
    string marca;
    string modello;
    string cilindrata;
    int anno;
    string targa;
    int velocita;
    int litri;
};
class Moto : public Vettura {
public:
    Moto(string marca, string modello, string cilindrata, int anno, string targa, int velocita, int frena, string marca_casco) {
        this->marca = marca;
        this->modello = modello;
        this->cilindrata = cilindrata;
        this->anno = anno;
        this->targa = targa;
        this->velocita = velocita;
        this->frena = frena;
        this->marca_casco=marca_casco;
    }
    string Casa_Produtttrice(){
        cout << "Marca dell'moto: " << marca <<endl;;
        return marca;
    }
    string Modello(){
        cout << "Modello dell'moto: " <<  modello << endl;
        return modello;
    }
    string Cilindrata(){
        cout << "Cilindrata dell'moto: " << cilindrata <<endl;
        return cilindrata;
    }
    void data_immatricolazione(){
       cout << "Anno immatricolazione: " << anno << endl;
    }
    string n_targa() {
        anno = anno +2;
        cout << "Targa dell'moto: " << targa << endl;
        cout << "Anno prima revisione: " << anno << endl;
        return targa;
    }
    void accelerazione() {
        cout << "Velocità dell'moto: " << velocita << endl;
    }
    void frenata() {
        velocita = velocita - frena;
        cout << "Velocità dell'moto dopo la frenata: " << velocita << endl;
    }
     string casco(){
        cout << " la marca del casco è :" << marca_casco << endl;  
        return marca_casco;
         
     }
private:
    int frena;
    string marca;
    string modello;
    string cilindrata;
    int anno;
    string targa;
    int velocita;
    string marca_casco;
};

int main(){
    Vettura* a = new Auto("Fiat", "Panda", "900cc", 2023, "AA123BB", 100, 10,"3");
    a->Casa_Produtttrice();
    a->Modello();
    a->Cilindrata();
    a->data_immatricolazione();
    a->n_targa();
    a->accelerazione();
    a->frenata();
    Auto* Porte = dynamic_cast<Auto*>(a);
    Porte->porte();
    delete a;
    cout << endl;
    Vettura* f = new Furgone("Mercedes", "Vito", "2000cc", 2023, "AA456CC", 120, 40, 680);
    f->Casa_Produtttrice() ;
    f->Modello();
    f->Cilindrata();
    f->data_immatricolazione();
    f->n_targa();
    f->accelerazione();
    f->frenata();
    Furgone* tot_litri = dynamic_cast<Furgone*>(f);
    tot_litri->capienza();
    delete f;
    cout << endl;
    Vettura* m = new Moto("Yamaha", "Tmax", "499cc", 2023, "AA789DD", 180, 60, "Nolan");
    m->Casa_Produtttrice();
    m->Modello();
    m->Cilindrata();
    m->data_immatricolazione();
    m->n_targa();
    m->accelerazione();
    m->frenata();
    Moto* m_casco = dynamic_cast<Moto*>(m);
    m_casco->casco();
    
    delete m;
    
    
    return 0;
};
