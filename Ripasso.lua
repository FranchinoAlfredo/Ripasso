-- Dichiarazione di variabili
numero = 10
stringa = "Ciao mondo"
booleano = true

-- Assegnazione
numero = 20
stringa = "Hello world"
booleano = false

-- Input/output
io.write("Inserisci il tuo nome: ")
nome = io.read()
print("Ciao", nome)

-- Condizioni
if numero > 10 then
    print("Il numero è maggiore di 10")
elseif numero == 10 then
    print("Il numero è uguale a 10")
else
    print("Il numero è minore di 10")
end

-- Cicli
for i = 0, 4 do
    print(i)
end

-- Utilizzo di while
numero = 0
while numero < 5 do
    print(numero)
    numero = numero + 1
end

-- Utilizzo di do-while (simulato con un semplice while)
repeat
    io.write("Vuoi continuare? (s/n): ")
    scelta = io.read()
until scelta == "n"

-- Utilizzo di for con lista
lista = {1, 2, 3, 4, 5}
for _, elemento in ipairs(lista) do
    print(elemento)
end

-- Utilizzo di for con range
for i = 0, 4 do
    print(i)
end

-- Utilizzo di for con ipairs per ottenere indice e valore
for indice, valore in ipairs(lista) do
    print("Indice:", indice, "Valore:", valore)
end

-- Utilizzo di for con tabella
dizionario = {chiave1 = "valore1", chiave2 = "valore2", chiave3 = "valore3"}
for chiave, valore in pairs(dizionario) do
    print("Chiave:", chiave, "Valore:", valore)
end

-- And, Or e Not
if numero > 0 and stringa == "Hello" then
    print("Entrambi i controlli sono veri")
end

if numero < 0 or booleano == true then
    print("Almeno uno dei controlli è vero")
end

if not booleano then
    print("Il booleano è falso")
end

-- Liste
lista = {1, 2, 3, 4, 5}
print("Primo elemento della lista:", lista[1])

-- Array (non esistono come in altri linguaggi, ma le tabelle possono essere usate in modo simile)
-- Matrici
matrice = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
print("Elemento nella riga 2, colonna 3:", matrice[2][3])

-- Funzioni
function somma(a, b)
    return a + b
end

risultato = somma(3, 4)
print("Risultato della somma:", risultato)

-- Classi e oggetti (non esistono nativamente in Lua, ma è possibile simulare attraverso tabelle e metodi)
Persona = {}
function Persona:new(nome, eta)
    o = {nome = nome, eta = eta}
    setmetatable(o, self)
    self.__index = self
    return o
end

function Persona:saluta()
    print("Ciao, mi chiamo", self.nome, "e ho", self.eta, "anni")
end

persona1 = Persona:new("Mario", 30)
persona1:saluta()

-- Gestione delle eccezioni (try-except) (non esiste nativamente in Lua, ma può essere simulato con pcall)
-- Lavorare con i file (lettura, scrittura)
-- Scrivere su un file
file = io.open("test.txt", "w")
file:write("Hello, world!")
file:close()

-- Leggere da un file
file = io.open("test.txt", "r")
contenuto = file:read("*a")
file:close()
print("Contenuto del file:", contenuto)

-- Utilizzo dei moduli e delle librerie (è possibile utilizzare librerie esterne in Lua, ma non esiste un meccanismo di importazione simile a Python)
-- Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo) (può essere simulato con tabelle e metodi)
-- Utilizzo delle decorazioni (decorators) (non esiste nativamente in Lua)
-- Generazione di numeri casuali
math.randomseed(os.time())
numero_casuale = math.random(1, 100)
print("Numero casuale generato:", numero_casuale)

-- Gestione delle stringhe (metodi utili, formattazione)
stringa = "hello world"
print("Stringa in maiuscolo:", string.upper(stringa))

-- Manipolazione di date e orari (Lua non ha una libreria standard per la gestione del tempo come Python, ma è possibile utilizzare librerie esterne)
-- Utilizzo dei set e dei dizionari (Lua non ha set come struttura dati built-in, ma è possibile simularli con tabelle; i dizionari in Lua sono già tabelle)
-- Espressioni regolari (Lua ha un supporto limitato per le espressioni regolari attraverso la libreria `string`, ma non è così potente come in Python)

-- Lua ha un supporto limitato per le espressioni regolari attraverso la libreria `string`, ma non è così potente come in Python

-- Definizione di una stringa di testo
testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone"

-- Utilizzo delle espressioni regolari per trovare parole che iniziano con "gatt"
parole_gatto = string.gmatch(testo, "gatt%w*")
print("Parole che iniziano con 'gatt':")
for parola in parole_gatto do
    print(parola)
end

-- Sostituzione di parole con altre parole utilizzando le espressioni regolari
nuovo_testo = string.gsub(testo, "cane", "papero")
print("Testo con 'cane' sostituito da 'papero':", nuovo_testo)

