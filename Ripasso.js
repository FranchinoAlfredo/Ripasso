// Dichiarazione di variabili
let numero = 10;
let stringa = "Ciao mondo";
let booleano = true;

// Assegnazione
numero = 20;
stringa = "Hello world";
booleano = false;

// Input/output
let nome = prompt("Inserisci il tuo nome: ");
console.log("Ciao", nome);

// Condizioni
if (numero > 10) {
    console.log("Il numero è maggiore di 10");
} else if (numero === 10) {
    console.log("Il numero è uguale a 10");
} else {
    console.log("Il numero è minore di 10");
}

// Cicli
for (let i = 0; i < 5; i++) {
    console.log(i);
}

// Utilizzo di while
numero = 0;
while (numero < 5) {
    console.log(numero);
    numero++;
}

// Utilizzo di do-while (simulato con un semplice while)
let scelta = "";
while (true) {
    scelta = prompt("Vuoi continuare? (s/n): ").toLowerCase();
    if (scelta === "n") {
        break;
    }
}

// Utilizzo di for con array
let lista = [1, 2, 3, 4, 5];
for (let elemento of lista) {
    console.log(elemento);
}

// Utilizzo di for con range
for (let i = 0; i < 5; i++) {
    console.log(i);
}

// Utilizzo di for con enumerate per ottenere indice e valore
lista.forEach((valore, indice) => {
    console.log("Indice:", indice, "Valore:", valore);
});

// Utilizzo di for con oggetto
let dizionario = {"chiave1": "valore1", "chiave2": "valore2", "chiave3": "valore3"};
for (let chiave in dizionario) {
    console.log("Chiave:", chiave, "Valore:", dizionario[chiave]);
}

// Switch (sostituito con if-else)
let valore = 2;
if (valore === 1) {
    console.log("Valore è 1");
} else if (valore === 2) {
    console.log("Valore è 2");
} else {
    console.log("Valore non è né 1 né 2");
}

// And, Or e Not
if (numero > 0 && stringa === "Hello world") {
    console.log("Entrambi i controlli sono veri");
}

if (numero < 0 || booleano === true) {
    console.log("Almeno uno dei controlli è vero");
}

if (!booleano) {
    console.log("Il booleano è falso");
}

// Array
lista = [1, 2, 3, 4, 5];
console.log("Primo elemento della lista:", lista[0]);

// Matrici
let matrice = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];
console.log("Elemento nella riga 2, colonna 3:", matrice[1][2]);

// Funzioni
function somma(a, b) {
    return a + b;
}

let risultato = somma(3, 4);
console.log("Risultato della somma:", risultato);

// Classi e oggetti
class Persona {
    constructor(nome, eta) {
        this.nome = nome;
        this.eta = eta;
    }

    saluta() {
        console.log("Ciao, mi chiamo", this.nome, "e ho", this.eta, "anni");
    }
}

let persona1 = new Persona("Mario", 30);
persona1.saluta();

// Gestione delle eccezioni (try-catch)
try {
    let risultato = 10 / 0;
} catch (error) {
    console.log("Impossibile dividere per zero!");
}

// Lavorare con i file (lettura, scrittura)
// Per scrivere su un file si utilizza il modulo 'fs' in Node.js
const fs = require('fs');

// Scrivere su un file
fs.writeFileSync("test.txt", "Hello, world!");

// Leggere da un file
let contenuto = fs.readFileSync("test.txt", "utf8");
console.log("Contenuto del file:", contenuto);

// Utilizzo dei moduli e delle librerie
const math = require('mathjs');
console.log("Radice quadrata di 16:", math.sqrt(16));

// Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo)
// Ereditarietà
class Animale {
    constructor(nome) {
        this.nome = nome;
    }

    parla() {}
}

class Cane extends Animale {
    parla() {
        console.log("Bau bau!");
    }
}

let cane = new Cane("Fido");
cane.parla();

// Incapsulamento
class Auto {
    constructor(marca, modello) {
        this.marca = marca;
        this.modello = modello;
        this._anno = 2022; // Attributo privato
    }

    getAnno() {
        return this._anno;
    }
}

let auto = new Auto("Toyota", "Corolla");
console.log("Anno di produzione:", auto.getAnno());

// Polimorfismo
class Forma {
    calcolaArea() {}
}

class Rettangolo extends Forma {
    constructor(base, altezza) {
        super();
        this.base = base;
        this.altezza = altezza;
    }

    calcolaArea() {
        return this.base * this.altezza;
    }
}

class Cerchio extends Forma {
    constructor(raggio) {
        super();
        this.raggio = raggio;
    }

    calcolaArea() {
        return Math.PI * Math.pow(this.raggio, 2);
    }
}

let rettangolo = new Rettangolo(5, 4);
console.log("Area del rettangolo:", rettangolo.calcolaArea());

let cerchio = new Cerchio(3);
console.log("Area del cerchio:", cerchio.calcolaArea());

// Utilizzo dei decorators (decoratori)
function decoratore(funzione) {
    return function() {
        console.log("Prima di eseguire la funzione");
        funzione();
        console.log("Dopo aver eseguito la funzione");
    };
}

let saluta = decoratore(function() {
    console.log("Ciao!");
});

saluta();

// Generazione di numeri casuali
let numeroCasuale = Math.floor(Math.random() * 100) + 1;
console.log("Numero casuale generato:", numeroCasuale);

// Gestione delle stringhe (metodi utili, formattazione)
stringa = "hello world";
console.log("Stringa in maiuscolo:", stringa.toUpperCase());

// Manipolazione di date e orari
let dataCorrente = new Date();
console.log("Data e ora corrente:", dataCorrente);

// Utilizzo dei set e degli oggetti
let insieme = new Set([1, 2, 3, 4, 5]);
console.log("Insieme:", insieme);

// Espressioni regolari
let re = /gatt\w*/g;
let testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone";
let paroleGatto = testo.match(re);
console.log("Parole che iniziano con 'gatt':", paroleGatto);

let nuovoTesto = testo.replace(/cane/g, "papero");
console.log("Testo con 'cane' sostituito da 'papero':", nuovoTesto);
