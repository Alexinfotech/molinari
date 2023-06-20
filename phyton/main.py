'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
print ('Hello World')
print("hello")
'''c = 3.2
a = "ciao"
print(a,c)'''
for i in range(5):
    print(i)
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
 print(fruit)
 
 

# Variables
x = 10
y = 20
z = x + y
print("The value of x + y is:", z)

# Strings
greeting = "Hello, World!"
print(greeting)

# Lists
fruits = ["apple", "banana", "cherry"]
print("The first fruit in the list is:", fruits[0])

# For Loops
for fruit in fruits:
    print("A fruit in the list is:", fruit)

# If Statements
if x > y:
    print("x is greater than y")
else:
    print("y is greater than x")

# Functions
def add_numbers(x, y):
    return x + y

result = add_numbers(x, y)
print("The result of adding x and y is:", result)
# Variables
x = 10
y = 20
z = x + y
print("The value of x + y is:", z)

# Strings
greeting = "Hello, World!"
name = "John Doe"
print(greeting + " My name is " + name)

# Lists
fruits = ["apple", "banana", "cherry"]
print("The first fruit in the list is:", fruits[0])
fruits.append("orange")
print("The last fruit in the list is:", fruits[-1])

# For Loops
for fruit in fruits:
    print("A fruit in the list is:", fruit)

# If Statements
if x > y:
    print("x is greater than y")
else:
    print("y is greater than x")

# Dictionaries
person = {
    "name": "John Doe",
    "age": 30,
    "country": "USA"
}
print("My name is", person["name"], "and I am", person["age"], "years old.")

# Functions
def add_numbers(x, y):
    return x + y

result = add_numbers(x, y)
print("The result of adding x and y is:", result)

# Classes
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def say_hello(self):
        print("Hello, my name is", self.name)

john = Person("John Doe", 30)
john.say_hello()


# Creazione di una lista vuota
dynamic_array = []

# Aggiungi elementi alla lista
dynamic_array.append(10)
dynamic_array.append(20)
dynamic_array.append(30)

# Stampa il contenuto della lista
print(dynamic_array) # Output: [10, 20, 30]

# Modifica un elemento della lista
dynamic_array[1] = 25

# Stampa il contenuto della lista
print(dynamic_array) # Output: [10, 25, 30]

# Rimuovi un elemento dalla lista
dynamic_array.pop(1)

# Stampa il contenuto della lista
print(dynamic_array) # Output: [10, 30]

# Legge un numero intero da tastiera
num = int(input("Inserisci un numero intero: "))

# Stampa il numero inserito
print("Il numero inserito è:", num)

# Legge un numero intero da tastiera
num = int(input("Inserisci un numero intero: "))

# Stampa il numero inserito
print("Il numero inserito è:", num)


'''# Crea una lista vuota per i numeri inseriti
numbers = []

# Chiedi all'utente di inserire i numeri
while True:
    num = input("Inserisci un numero (digita 'stop' per terminare): ")
    if num == 'stop':
        break
    numbers.append(int(num))

# Dividi la lista in due sotto-liste, una per i numeri pari e una per i numeri dispari
even_numbers = [num for num in numbers if num % 2 == 0]
odd_numbers = [num for num in numbers if num % 2 != 0]

# Ordina entrambe le sotto-liste
even_numbers.sort()
odd_numbers.sort()

# Stampa la lista finale che contiene prima i numeri pari e poi i numeri dispari
print("Numeri inseriti ordinati:", even_numbers + odd_numbers)'''

# Legge una stringa da tastiera
stringa = input("Inserisci una stringa: ")

# Stampa la stringa inserita
print("La stringa inserita è:", stringa)


# Apre un file in modalità scrittura
file = open('file.txt', 'w')

# Scrive una stringa nel file
file.write('Questo è un esempio di file di testo in Python.')

# Chiude il file
file.close()

# Apre un file in modalità di scrittura (append)
file = open('file.txt', 'a')

# Aggiunge una stringa al file
file.write('\nQuesta è una stringa aggiuntiva.')

# Chiude il file
file.close()

# Apre un file in modalità lettura
file = open('file.txt', 'r')

# Legge il contenuto del file
contenuto = file.read()

# Stampa il contenuto del file
print(contenuto)

# Chiude il file
file.close()

# Apre un file in modalità lettura
file = open('file.txt', 'r')

# Legge il file riga per riga
righe = file.readlines()

# Stampa le righe del file
for riga in righe:
    print(riga)

# Chiude il file
file.close()

# Definizione della classe base
class Animale:
    def parla(self):
        return 'Il suono dell\'animale'

# Definizione della classe derivata
class Cane(Animale):
    def parla(self):
        return 'Il cane abbaia'

# Definizione della classe derivata
class Gatto(Animale):
    def parla(self):
        return 'Il gatto miagola'

# Creazione di oggetti di diverse classi
animale = Animale()
cane = Cane()
gatto = Gatto()

# Uso dei metodi polimorfici
print(animale.parla()) # Stampa: 'Il suono dell'animale'
print(cane.parla())    # Stampa: 'Il cane abbaia'
print(gatto.parla())   # Stampa: 'Il gatto miagola'

# Definizione della classe
class Veicolo:
    def __init__(self, make, model, year, weight):
        self.make = make
        self.model = model
        self.year = year
        self.weight = weight

    def description(self):
        return f'{self.make} {self.model} del {self.year} con un peso di {self.weight} kg'

# Creazione di oggetti
auto = Veicolo('Toyota', 'Camry', 2020, 1500)
moto = Veicolo('Harley-Davidson', 'Sportster', 2022, 550)

# Uso dei metodi degli oggetti
print(auto.description()) # Stampa: 'Toyota Camry del 2020 con un peso di 1500 kg'
print(moto.description()) # Stampa: 'Harley-Davidson Sportster del 2022 con un peso di 550 kg'
