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

    def __add__(self, other):
        nuovo_numeratore = self.numeratore * other.denominatore + other.numeratore * self.denominatore
        nuovo_denominatore = self.denominatore * other.denominatore
        return Frazione(nuovo_numeratore, nuovo_denominatore)

    def __sub__(self, other):
        nuovo_numeratore = self.numeratore * other.denominatore - other.numeratore * self.denominatore
        nuovo_denominatore = self.denominatore * other.denominatore
        return Frazione(nuovo_numeratore, nuovo_denominatore)

    def __mul__(self, other):
        nuovo_numeratore = self.numeratore * other.numeratore
        nuovo_denominatore = self.denominatore * other.denominatore
        return Frazione(nuovo_numeratore, nuovo_denominatore)

    def __str__(self):
        return f'{self.numeratore}/{self.denominatore}'
        
frazione_1 = Frazione(1, 2)
frazione_2 = Frazione(3, 4)

somma = frazione_1 + frazione_2
differenza = frazione_1 - frazione_2
prodotto = frazione_1 * frazione_2

print(somma) # Stampa "10/8"
print(differenza) # Stampa "-2/8"
print(prodotto) # Stampa "3/8"