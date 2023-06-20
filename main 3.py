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
        
frazione = Frazione(0, 0)
frazione.inserisci_frazione()
print(frazione)