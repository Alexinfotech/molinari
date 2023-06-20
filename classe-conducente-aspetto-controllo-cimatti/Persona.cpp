#include "Persona.h"
void maiusc(string* str)
{
    if(!(str->empty()))
    {
        str->at(0) = toupper(str->at(0));
    }
}
Persona::Persona(string nome, string cognome, int gg, int mm, int aa)
{
    this->gg = gg;
    this->mm = mm;
    this->aa = aa;
    data_nascita = new string;
    //formato stringa data : gg/mm/aaaa
    if(gg < 10)
    {
        *data_nascita += '0';
    }
    *data_nascita += to_string(gg);//to_string(int) converte un intero in un oggetto string
    *data_nascita += "/";
    if(mm < 10)
    {
        *data_nascita += '0';
    }
    *data_nascita += to_string(mm);
    *data_nascita += "/";
    *data_nascita += to_string(aa);
    if(!checkData())//se la data non è valida
    {
        cout << "Errore data inserita non valida" << endl;
        data_nascita = NULL;
        delete data_nascita;
        return;
    }
    this->nome = new string(nome);
    this->cognome = new string(cognome);
    maiusc(this->nome);
    maiusc(this->cognome);
}

void Persona::setNome(string nome)
{
    this->nome = NULL;
    delete this->nome;
    this->nome = new string(nome);
}
void Persona::setCognome(string cognome)
{
    this->cognome = NULL;
    delete this->cognome;
    this->cognome = new string(cognome);//c'era un errore: this->nome = new string(cognome);
}
void Persona::setData(int gg, int mm, int aa)
{
    string temp = *data_nascita;
    this->gg = gg;
    this->mm = mm;
    this->aa = aa;
    this->data_nascita = NULL;
    delete this->data_nascita;
    data_nascita = new string;
    *data_nascita += to_string(gg);
    *data_nascita += "/";
    *data_nascita += to_string(mm);
    *data_nascita += "/";
    *data_nascita += to_string(aa);
    if(!checkData())
    {
        cout << "Errore data inserita non valida" << endl;
        data_nascita = NULL;
        delete data_nascita;
        *data_nascita = temp;
    }
}
void Persona::stampa()
{
    if(nome == NULL)
    {
        return;
    }
    cout << "nome : " << *nome << "\ncognome : " << *cognome << "\ndata di nascita : " << *data_nascita << endl;
}

bool Persona::isMaggiorenne()
{
    return(calcolaEta() >= 18);
}
int Persona::calcolaEta()
{
    time_t t = time(0);// time() restituisce il tempo passato dal 1 gennaio 1970 in secondi
    //https://www.tutorialspoint.com/c_standard_library/c_function_time.htm
    tm* data = localtime(&t);//la funzione utilizza l'ora indicata dal parametro per riempire una struttura tm. la funzione ritorna una struttura (struct)tm 
    //https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm
    int anno = data->tm_year + 1900;//int tm_year = anni passati dal 1900 .vedi struct tm 
    int eta = anno - aa;
    if(mm > data->tm_mon)//se il mese della data di nascita e' maggiore del mese corrente
    {
        return (eta - 1);
    }
    else if(mm == data->tm_mon && gg > data->tm_mday)//se il mese di nascita e quello corrente sono uguali controllo se il giorno della data di nascita
                                                     //è maggiore di quello corrente
    {
        return (eta -1);
    }
    return eta;
    
} 
void Persona::operator =(Persona op)
{
    *nome = op.getNome();
    *cognome = op.getCognome();
    *data_nascita = op.getData();
    gg = op.getGiorno();
    mm = op.getMese();
    aa = op.getAnno();
}

bool Persona::operator ==(Persona op)
{
    return(this->calcolaEta() == op.calcolaEta());
}
bool Persona::operator <(Persona op)
{
    return(!(this->calcolaEta() >= op.calcolaEta()));
}
bool Persona::operator >(Persona op)
{
    return(!(this->calcolaEta() <= op.calcolaEta()));
}
bool Persona::operator >=(Persona op)
{
    return(!(this->calcolaEta() < op.calcolaEta()));
}
bool Persona::operator <=(Persona op)
{
    return(!(this->calcolaEta() > op.calcolaEta()));
}
bool Persona::bisestile()
{//se l'anno è divisibile x 400 oppure divisibile x 4 ma non x 100
    if(aa%400==0 || (aa%4==0 && aa%100!=0))
    {
        return true;
        
    }
    else
    {
        return false;
    }
}
int Persona::checkMese()
{ 
    switch (mm)
    {
        case 2:
        if (bisestile()==true)//se l'anno di nascita è bisestile e il mese è febbraio
        {
            return 29;
        }
        else
        {
            return 28;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        return 30;
        default: 
        return 31;
    }
}
bool Persona::checkData()
{
    time_t t = time(0);
    tm* data = localtime(&t);
    int anno = data->tm_year + 1900;//anno corrente
    if (aa>=1900 && aa<anno && mm>0 && mm<13 && gg>0 && gg<=checkMese())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Conducente::controllaValiditaPatente() {
    time_t t = time(0);
    tm* data = localtime(&t);
    int anno = data->tm_year + 1900;
    return (anno - AnnoAcquisizionePatente >=1);
}
void Conducente::stampaConducente(){//stampa le proprietà della classe 
    cout << "Nome: " << this->getNome() << endl;
    cout << "Cognome: " << this->getCognome() << endl;
    cout << "Tipo patente: " << TipoPatente << endl;
    cout << "Matricola patente: " << MatricolaPatente << endl;
    cout << "Anno acquisizione patente: " << AnnoAcquisizionePatente << endl; 
}