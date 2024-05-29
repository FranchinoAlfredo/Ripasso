<?php

// Dichiarazione di variabili
$numero = 10;
$stringa = "Ciao mondo";
$booleano = true;

// Assegnazione
$numero = 20;
$stringa = "Hello world";
$booleano = false;

// Input/output
$nome = readline("Inserisci il tuo nome: ");
echo "Ciao $nome\n";

// Condizioni
if ($numero > 10) {
    echo "Il numero è maggiore di 10\n";
} elseif ($numero == 10) {
    echo "Il numero è uguale a 10\n";
} else {
    echo "Il numero è minore di 10\n";
}

// Cicli
for ($i = 0; $i < 5; $i++) {
    echo "$i\n";
}

// Utilizzo di while
$numero = 0;
while ($numero < 5) {
    echo "$numero\n";
    $numero++;
}

// Utilizzo di do-while (simulato con un semplice while)
$scelta = "";
do {
    $scelta = readline("Vuoi continuare? (s/n): ");
} while (strtolower($scelta) != "n");

// Utilizzo di foreach con array
$lista = [1, 2, 3, 4, 5];
foreach ($lista as $elemento) {
    echo "$elemento\n";
}

// Utilizzo di foreach con dizionario
$dizionario = ["chiave1" => "valore1", "chiave2" => "valore2", "chiave3" => "valore3"];
foreach ($dizionario as $chiave => $valore) {
    echo "Chiave: $chiave, Valore: $valore\n";
}

// And, Or e Not
if ($numero > 0 && $stringa == "Hello") {
    echo "Entrambi i controlli sono veri\n";
}

if ($numero < 0 || $booleano == true) {
    echo "Almeno uno dei controlli è vero\n";
}

if (!$booleano) {
    echo "Il booleano è falso\n";
}

// Array
$lista = [1, 2, 3, 4, 5];
echo "Primo elemento della lista: " . $lista[0] . "\n";

// Matrici
$matrice = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
echo "Elemento nella riga 2, colonna 3: " . $matrice[1][2] . "\n";

// Funzioni
function somma($a, $b) {
    return $a + $b;
}

$risultato = somma(3, 4);
echo "Risultato della somma: $risultato\n";

// Classi e oggetti
class Persona {
    public $nome;
    public $eta;

    public function __construct($nome, $eta) {
        $this->nome = $nome;
        $this->eta = $eta;
    }

    public function saluta() {
        echo "Ciao, mi chiamo $this->nome e ho $this->eta anni\n";
    }
}

$persona1 = new Persona("Mario", 30);
$persona1->saluta();

// Gestione delle eccezioni (try-catch)
try {
    $risultato = 10 / 0;
} catch (Exception $e) {
    echo "Impossibile dividere per zero!\n";
}

// Lavorare con i file (lettura, scrittura)
// Scrivere su un file
file_put_contents("test.txt", "Hello, world!");

// Leggere da un file
$contenuto = file_get_contents("test.txt");
echo "Contenuto del file: $contenuto\n";

// Utilizzo dei moduli e delle librerie
echo "Radice quadrata di 16: " . sqrt(16) . "\n";

// Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo)
// Ereditarietà
class Animale {
    public $nome;

    public function __construct($nome) {
        $this->nome = $nome;
    }

    public function parla() {
        // Implementazione nel caso necessario
    }
}

class Cane extends Animale {
    public function parla() {
        echo "Bau bau!\n";
    }
}

$cane = new Cane("Fido");
$cane->parla();

// Incapsulamento
class Auto {
    private $marca;
    private $modello;
    private $anno = 2022;

    public function __construct($marca, $modello) {
        $this->marca = $marca;
        $this->modello = $modello;
    }

    public function getAnno() {
        return $this->anno;
    }
}

$auto = new Auto("Toyota", "Corolla");
echo "Anno di produzione: " . $auto->getAnno() . "\n";

// Polimorfismo
abstract class Forma {
    abstract public function calcolaArea();
}

class Rettangolo extends Forma {
    private $base;
    private $altezza;

    public function __construct($base, $altezza) {
        $this->base = $base;
        $this->altezza = $altezza;
    }

    public function calcolaArea() {
        return $this->base * $this->altezza;
    }
}

class Cerchio extends Forma {
    private $raggio;

    public function __construct($raggio) {
        $this->raggio = $raggio;
    }

    public function calcolaArea() {
        return pi() * $this->raggio ** 2;
    }
}

$rettangolo = new Rettangolo(5, 4);
echo "Area del rettangolo: " . $rettangolo->calcolaArea() . "\n";

$cerchio = new Cerchio(3);
echo "Area del cerchio: " . $cerchio->calcolaArea() . "\n";

// Utilizzo delle decorazioni (decorators) - Non direttamente supportato in PHP

// Generazione di numeri casuali
$numero_casuale = rand(1, 100);
echo "Numero casuale generato: $numero_casuale\n";

// Gestione delle stringhe (metodi utili, formattazione)
$stringa = "hello world";
echo "Stringa in maiuscolo: " . strtoupper($stringa) . "\n";

// Manipolazione di date e orari
$data_corrente = new DateTime();
echo "Data e ora corrente: " . $data_corrente->format('Y-m-d H:i:s') . "\n";

// Utilizzo dei set e dei dizionari
// In PHP, gli insiemi non sono nativamente supportati, ma si possono simulare utilizzando array
$insieme = [1, 2, 3, 4, 5];
echo "Insieme: " . implode(", ", $insieme) . "\n";

// Espressioni regolari
// Utilizzo della funzione preg_match_all per trovare parole che iniziano con "gatt"
$testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone";
preg_match_all('/\bgatt\w*/', $testo, $parole_gatto);
echo "Parole che iniziano con 'gatt': " . implode(", ", $parole_gatto[0]) . "\n";

// Utilizzo della funzione preg_replace per sostituire parole con altre parole utilizzando le espressioni regolari
$nuovo_testo = preg_replace('/cane/', 'papero', $testo);
echo "Testo con 'cane' sostituito da 'papero': $nuovo_testo\n";
?>

