'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
print ('Hello World')
class Frazione:
    def __init__(self, numeratore, denominatore):
        self.numeratore = numeratore
        self.denominatore = denominatore
        
    def __str__(self):
        return f"{self.numeratore}/{self.denominatore}"
    
    def inserisci_frazione(self):
        self.numeratore = int(input("Inserisci il numeratore: "))
        self.denominatore = int(input("Inserisci il denominatore: "))
        
    def somma(self, altra_frazione):
        nuovo_numeratore = self.numeratore * altra_frazione.denominatore + \
                           altra_frazione.numeratore * self.denominatore
        nuovo_denominatore = self.denominatore * altra_frazione.denominatore
        return Frazione(nuovo_numeratore, nuovo_denominatore)
    
frazione1 = Frazione(0, 0)
frazione1.inserisci_frazione()
print("Prima frazione:", frazione1)

frazione2 = Frazione(0, 0)
frazione2.inserisci_frazione()
print("Seconda frazione:", frazione2)

frazione_somma = frazione1.somma(frazione2)
print("Somma:", frazione_somma)
