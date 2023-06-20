/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
print('Hello World');
// Variabili
var nome = "John";
var cognome = "Doe";
var età = 30;

// Stampa a console
console.log("Il mio nome è " + nome + " " + cognome + " e ho " + età + " anni.");

// Operatori aritmetici
var num1 = 10;
var num2 = 5;
var somma = num1 + num2;
var differenza = num1 - num2;
var prodotto = num1 * num2;
var divisione = num1 / num2;

// Stampa a console dei risultati
console.log("Somma: " + somma);
console.log("Differenza: " + differenza);
console.log("Prodotto: " + prodotto);
console.log("Divisione: " + divisione);

// Condizionali
var età = 25;

if (età < 18) {
  console.log("Sei minorenne.");
} else if (età >= 18 && età <= 65) {
  console.log("Sei maggiorenne.");
} else {
  console.log("Sei anziano.");
}

// Array
var frutta = ["mela", "banana", "arancia"];

// Stampa a console
console.log("Frutta: " + frutta);
console.log("Terzo frutto: " + frutta[2]);

// Funzioni
function saluta(nome) {
  return "Ciao " + nome + "!";
}

var saluto = saluta("John");

// Stampa a console
console.log(saluto);

// Ciclo For
for (var i = 0; i < frutta.length; i++) {
  console.log(frutta[i]);
}

// Oggetti
var persona = {
  nome: "John",
  cognome: "Doe",
  età: 30
};

// Stampa a console
console.log("Nome: " + persona.nome);
console.log("Cognome: " + persona.cognome);
console.log("Età: " + persona.età);