'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
print ('Hello World')
class Studente:
    def __init__(self, nome, età, corso):
        self.nome = nome
        self.età = età
        self.corso = corso

    def descrizione(self):
        return f'{self.nome} ha {self.età} anni e studia {self.corso}'
        
studente = Studente("Mario Rossi", 20, "Ingegneria Informatica")
print(studente.nome) # Stampa "Mario Rossi"
print(studente.descrizione()) # Stampa "Mario Rossi ha 20 anni e studia Ingegneria Informatica"