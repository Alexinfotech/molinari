class Conducente : public Persona {
public:
    Conducente(string nome, string cognome, int gg, int mm, int aa)
        : Persona(nome, cognome, gg, mm, aa) {}
    void setTipoPatente(string tipoPatente) {
        TipoPatente = tipoPatente;
    }
    string getTipoPatente() {
        return TipoPatente;
    }
    void setMatricolaPatente(string matricolaPatente) {
        MatricolaPatente = matricolaPatente;
    }
    string getMatricolaPatente() {
        return MatricolaPatente;
    }
    void setAnnoAcquisizionePatente(int annoAcquisizionePatente) {
        AnnoAcquisizionePatente = annoAcquisizionePatente;
    }
    int getAnnoAcquisizionePatente() {
        return AnnoAcquisizionePatente;
    }
    void stampa() {
        cout << "Tipo patente: " << TipoPatente << endl;
        cout << "Matricola patente: " << MatricolaPatente << endl;
        cout << "Anno acquisizione patente: " << AnnoAcquisizionePatente << endl;
    }
private:
    string TipoPatente;
    string MatricolaPatente;
    int AnnoAcquisizionePatente;
};
