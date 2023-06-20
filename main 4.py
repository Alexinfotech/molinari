'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
print ('Hello World')

class Veicolo:
    def __init__(self, make, model, year, weight):
        self.make = make
        self.model = model
        self.year = year
        self.weight = weight

    def description(self):
        return f'{self.make} {self.model} del {self.year} con un peso di {self.weight} kg'

auto = Veicolo('Toyota', 'Camry', 2020, 1500)
print(auto.make) # Stampa: 'Toyota'
print(auto.description()) # Stampa: 'Toyota Camry del 2020 con un peso di 1500 kg