# Dichiarazione di variabili
numero = 10
stringa = "Ciao mondo"
booleano = True

# Assegnazione
numero = 20
stringa = "Hello world"
booleano = False

# Input/output
nome = input("Inserisci il tuo nome: ")
print("Ciao", nome)

# Condizioni
if numero > 10:
    print("Il numero è maggiore di 10")
elif numero == 10:
    print("Il numero è uguale a 10")
else:
    print("Il numero è minore di 10")

# Cicli
for i in range(5):
    print(i)
    
# Utilizzo di while
numero = 0
while numero < 5:
    print(numero)
    numero += 1

# Utilizzo di do-while (simulato con un semplice while)
scelta = ""
while True:
    scelta = input("Vuoi continuare? (s/n): ").lower()
    if scelta == "n":
        break

# Utilizzo di for con lista
lista = [1, 2, 3, 4, 5]
for elemento in lista:
    print(elemento)

# Utilizzo di for con range
for i in range(5):
    print(i)

# Utilizzo di for con enumerate per ottenere indice e valore
for indice, valore in enumerate(lista):
    print("Indice:", indice, "Valore:", valore)

# Utilizzo di for con dizionario
dizionario = {"chiave1": "valore1", "chiave2": "valore2", "chiave3": "valore3"}
for chiave, valore in dizionario.items():
    print("Chiave:", chiave, "Valore:", valore)

# Switch (non esiste nativamente in Python, sostituito con if-elif-else)
# Esempio con if-elif-else
valore = 2
if valore == 1:
    print("Valore è 1")
elif valore == 2:
    print("Valore è 2")
else:
    print("Valore non è né 1 né 2")

# And, Or e Not
if numero > 0 and stringa == "Hello":
    print("Entrambi i controlli sono veri")

if numero < 0 or booleano == True:
    print("Almeno uno dei controlli è vero")

if not booleano:
    print("Il booleano è falso")

# Liste
lista = [1, 2, 3, 4, 5]
print("Primo elemento della lista:", lista[0])

# Array (Python non ha array come in altri linguaggi, ma le liste possono essere usate in modo simile)
# Matrici
matrice = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Elemento nella riga 2, colonna 3:", matrice[1][2])

# Funzioni
def somma(a, b):
    return a + b

risultato = somma(3, 4)
print("Risultato della somma:", risultato)

# Classi e oggetti
class Persona:
    def __init__(self, nome, eta):
        self.nome = nome
        self.eta = eta

    def saluta(self):
        print("Ciao, mi chiamo", self.nome, "e ho", self.eta, "anni")

persona1 = Persona("Mario", 30)
persona1.saluta()

# Gestione delle eccezioni (try-except)
try:
    risultato = 10 / 0
except ZeroDivisionError:
    print("Impossibile dividere per zero!")

# Lavorare con i file (lettura, scrittura)
# Scrivere su un file
with open("test.txt", "w") as file:
    file.write("Hello, world!")

# Leggere da un file
with open("test.txt", "r") as file:
    contenuto = file.read()
    print("Contenuto del file:", contenuto)

# Utilizzo dei moduli e delle librerie
import math
print("Radice quadrata di 16:", math.sqrt(16))

# Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo)
# Ereditarietà
class Animale:
    def __init__(self, nome):
        self.nome = nome

    def parla(self):
        pass

class Cane(Animale):
    def parla(self):
        print("Bau bau!")

cane = Cane("Fido")
cane.parla()

# Incapsulamento
class Auto:
    def __init__(self, marca, modello):
        self.marca = marca
        self.modello = modello
        self.__anno = 2022  # Attributo privato

    def get_anno(self):
        return self.__anno

auto = Auto("Toyota", "Corolla")
print("Anno di produzione:", auto.get_anno())

# Polimorfismo
class Forma:
    def calcola_area(self):
        pass

class Rettangolo(Forma):
    def __init__(self, base, altezza):
        self.base = base
        self.altezza = altezza

    def calcola_area(self):
        return self.base * self.altezza

class Cerchio(Forma):
    def __init__(self, raggio):
        self.raggio = raggio

    def calcola_area(self):
        return math.pi * self.raggio ** 2

rettangolo = Rettangolo(5, 4)
print("Area del rettangolo:", rettangolo.calcola_area())

cerchio = Cerchio(3)
print("Area del cerchio:", cerchio.calcola_area())

# Utilizzo delle decorazioni (decorators)
def decoratore(funzione):
    def wrapper():
        print("Prima di eseguire la funzione")
        funzione()
        print("Dopo aver eseguito la funzione")
    return wrapper

@decoratore
def saluta():
    print("Ciao!")

saluta()

# Generazione di numeri casuali
numero_casuale = random.randint(1, 100)
print("Numero casuale generato:", numero_casuale)

# Gestione delle stringhe (metodi utili, formattazione)
stringa = "hello world"
print("Stringa in maiuscolo:", stringa.upper())

# Manipolazione di date e orari
import datetime
data_corrente = datetime.datetime.now()
print("Data e ora corrente:", data_corrente)

# Utilizzo dei set e dei dizionari
insieme = {1, 2, 3, 4, 5}
print("Insieme:", insieme)


# Espressioni regolari
import re

# Definizione di una stringa di testo
testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone"

# Utilizzo delle espressioni regolari per trovare parole che iniziano con "gatt"
parole_gatto = re.findall(r'\bgatt\w*', testo)
print("Parole che iniziano con 'gatt':", parole_gatto)

# Sostituzione di parole con altre parole utilizzando le espressioni regolari
nuovo_testo = re.sub(r'cane', 'papero', testo)
print("Testo con 'cane' sostituito da 'papero':", nuovo_testo)
