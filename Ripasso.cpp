#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <cmath>
#include <random>
#include <regex>

// Funzione somma
int somma(int a, int b) {
    return a + b;
}

// Classe Persona
class Persona {
public:
    std::string nome;
    int eta;

    Persona(std::string nome, int eta) : nome(nome), eta(eta) {}

    void saluta() {
        std::cout << "Ciao, mi chiamo " << nome << " e ho " << eta << " anni\n";
    }
};

// Classe Animale
class Animale {
public:
    std::string nome;

    Animale(std::string nome) : nome(nome) {}

    virtual void parla() = 0;
};

// Classe Cane derivata da Animale
class Cane : public Animale {
public:
    Cane(std::string nome) : Animale(nome) {}

    void parla() override {
        std::cout << "Bau bau!\n";
    }
};

// Classe Auto con incapsulamento
class Auto {
private:
    int anno;

public:
    std::string marca;
    std::string modello;

    Auto(std::string marca, std::string modello) : marca(marca), modello(modello) {
        anno = 2022;
    }

    int getAnno() {
        return anno;
    }
};

// Classe Forma con polimorfismo
class Forma {
public:
    virtual double calcolaArea() = 0;
};

// Classe Rettangolo derivata da Forma
class Rettangolo : public Forma {
public:
    double base, altezza;

    Rettangolo(double base, double altezza) : base(base), altezza(altezza) {}

    double calcolaArea() override {
        return base * altezza;
    }
};

// Classe Cerchio derivata da Forma
class Cerchio : public Forma {
public:
    double raggio;

    Cerchio(double raggio) : raggio(raggio) {}

    double calcolaArea() override {
        return M_PI * raggio * raggio;
    }
};

// Funzione decoratore
void decoratore(void (*funzione)()) {
    std::cout << "Prima di eseguire la funzione\n";
    funzione();
    std::cout << "Dopo aver eseguito la funzione\n";
}

// Funzione saluta per il decoratore
void saluta() {
    std::cout << "Ciao!\n";
}

int main() {
    // Dichiarazione di variabili
    int numero = 10;
    std::string stringa = "Ciao mondo";
    bool booleano = true;

    // Assegnazione
    numero = 20;
    stringa = "Hello world";
    booleano = false;

    // Input/output
    std::string nome;
    std::cout << "Inserisci il tuo nome: ";
    std::getline(std::cin, nome);
    std::cout << "Ciao " << nome << "\n";

    // Condizioni
    if (numero > 10) {
        std::cout << "Il numero è maggiore di 10\n";
    } else if (numero == 10) {
        std::cout << "Il numero è uguale a 10\n";
    } else {
        std::cout << "Il numero è minore di 10\n";
    }

    // Cicli for
    for (int i = 0; i < 5; ++i) {
        std::cout << i << "\n";
    }

    // Utilizzo di while
    numero = 0;
    while (numero < 5) {
        std::cout << numero << "\n";
        numero++;
    }

    // Simulazione di do-while
    std::string scelta;
    do {
        std::cout << "Vuoi continuare? (s/n): ";
        std::getline(std::cin, scelta);
    } while (scelta != "n");

    // Utilizzo di for con vector
    std::vector<int> lista = {1, 2, 3, 4, 5};
    for (int elemento : lista) {
        std::cout << elemento << "\n";
    }

    // Utilizzo di for con indice
    for (int i = 0; i < lista.size(); ++i) {
        std::cout << i << "\n";
    }

    // Utilizzo di for con indice e valore
    for (int i = 0; i < lista.size(); ++i) {
        std::cout << "Indice: " << i << " Valore: " << lista[i] << "\n";
    }

    // Utilizzo di for con map
    std::map<std::string, std::string> dizionario = {{"chiave1", "valore1"}, {"chiave2", "valore2"}, {"chiave3", "valore3"}};
    for (auto const& [chiave, valore] : dizionario) {
        std::cout << "Chiave: " << chiave << " Valore: " << valore << "\n";
    }

    // Switch simulato con if-else
    int valore = 2;
    if (valore == 1) {
        std::cout << "Valore è 1\n";
    } else if (valore == 2) {
        std::cout << "Valore è 2\n";
    } else {
        std::cout << "Valore non è né 1 né 2\n";
    }

    // And, Or e Not
    if (numero > 0 && stringa == "Hello world") {
        std::cout << "Entrambi i controlli sono veri\n";
    }

    if (numero < 0 || booleano == true) {
        std::cout << "Almeno uno dei controlli è vero\n";
    }

    if (!booleano) {
        std::cout << "Il booleano è falso\n";
    }

    // Liste
    std::cout << "Primo elemento della lista: " << lista[0] << "\n";

    // Matrici
    std::vector<std::vector<int>> matrice = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << "Elemento nella riga 2, colonna 3: " << matrice[1][2] << "\n";

    // Funzioni
    int risultato = somma(3, 4);
    std::cout << "Risultato della somma: " << risultato << "\n";

    // Creazione e utilizzo di oggetti
    Persona persona1("Mario", 30);
    persona1.saluta();

    // Gestione delle eccezioni
    try {
        risultato = 10 / 0;
    } catch (const std::exception& e) {
        std::cout << "Impossibile dividere per zero!\n";
    }

    // Lavorare con i file (lettura, scrittura)
    // Scrivere su un file
    std::ofstream fileScrittura("test.txt");
    if (fileScrittura.is_open()) {
        fileScrittura << "Hello, world!";
        fileScrittura.close();
    }

    // Leggere da un file
    std::ifstream fileLettura("test.txt");
    if (fileLettura.is_open()) {
        std::string contenuto;
        std::getline(fileLettura, contenuto);
        std::cout << "Contenuto del file: " << contenuto << "\n";
        fileLettura.close();
    }

    // Utilizzo dei moduli e delle librerie
    std::cout << "Radice quadrata di 16: " << sqrt(16) << "\n";

    // Concetti avanzati di programmazione orientata agli oggetti
    Cane cane("Fido");
    cane.parla();

    // Incapsulamento
    Auto auto1("Toyota", "Corolla");
    std::cout << "Anno di produzione: " << auto1.getAnno() << "\n";

    // Polimorfismo
    Rettangolo rettangolo(5, 4);
    std::cout << "Area del rettangolo: " << rettangolo.calcolaArea() << "\n";

    Cerchio cerchio(3);
    std::cout << "Area del cerchio: " << cerchio.calcolaArea() << "\n";

    // Utilizzo delle decorazioni (decorators) con funzioni puntatore
    decoratore(saluta);

    // Generazione di numeri casuali
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    int numeroCasuale = dis(gen);
    std::cout << "Numero casuale generato: " << numeroCasuale << "\n";

    // Gestione delle stringhe
    stringa = "hello world";
    for (auto & c: stringa) c = toupper(c);
    std::cout << "Stringa in maiuscolo: " << stringa << "\n";

    // Manipolazione di date e orari
    std::time_t now = std::time(0);
    std::tm* ltm = std::localtime(&now);
    std::cout << "Data e ora corrente: " << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon << "-" << ltm->tm_mday << " " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << "\n";

    // Utilizzo dei set e dei dizionari
    std::set<int> insieme = {1, 2, 3, 4, 5};
    std::cout << "Insieme: ";
    for (auto elem : insieme) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    // Espressioni regolari
    std::string testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone";
    std::regex re("\\bgatt\\w*");
    auto words_begin = std::sregex_iterator(testo.begin(), testo.end(), re);
    auto words_end = std::sregex_iterator();

    std::cout << "Parole che iniziano con 'gatt': ";
    for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
        std::smatch match = *i;
        std::string match_str = match.str();
        std::cout << match_str << " ";
    }
    std::cout << "\n";

    std::string nuovo_testo = std::regex_replace(testo, std::regex("cane"), "papero");
    std::cout << "Testo con 'cane' sostituito da 'papero': " << nuovo_testo << "\n";

    return 0;
}
