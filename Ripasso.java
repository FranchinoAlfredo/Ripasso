import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        // Dichiarazione di variabili
        int numero = 10;
        String stringa = "Ciao mondo";
        boolean booleano = true;

        // Assegnazione
        numero = 20;
        stringa = "Hello world";
        booleano = false;

        // Input/output
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci il tuo nome: ");
        String nome = scanner.nextLine();
        System.out.println("Ciao " + nome);

        // Condizioni
        if (numero > 10) {
            System.out.println("Il numero è maggiore di 10");
        } else if (numero == 10) {
            System.out.println("Il numero è uguale a 10");
        } else {
            System.out.println("Il numero è minore di 10");
        }

        // Cicli
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
        }

        // Utilizzo di while
        numero = 0;
        while (numero < 5) {
            System.out.println(numero);
            numero++;
        }

        // Utilizzo di do-while
        String scelta;
        do {
            System.out.print("Vuoi continuare? (s/n): ");
            scelta = scanner.nextLine().toLowerCase();
        } while (!scelta.equals("n"));

        // Utilizzo di for con lista
        ArrayList<Integer> lista = new ArrayList<>();
        lista.add(1);
        lista.add(2);
        lista.add(3);
        lista.add(4);
        lista.add(5);

        for (int elemento : lista) {
            System.out.println(elemento);
        }

        // Utilizzo di for con range
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
        }

        // Utilizzo di for con dizionario
        HashMap<String, String> dizionario = new HashMap<>();
        dizionario.put("chiave1", "valore1");
        dizionario.put("chiave2", "valore2");
        dizionario.put("chiave3", "valore3");

        for (Map.Entry<String, String> entry : dizionario.entrySet()) {
            System.out.println("Chiave: " + entry.getKey() + " Valore: " + entry.getValue());
        }

        // Switch
        int valore = 2;
        switch (valore) {
            case 1:
                System.out.println("Valore è 1");
                break;
            case 2:
                System.out.println("Valore è 2");
                break;
            default:
                System.out.println("Valore non è né 1 né 2");
        }

        // And, Or e Not
        if (numero > 0 && stringa.equals("Hello")) {
            System.out.println("Entrambi i controlli sono veri");
        }

        if (numero < 0 || booleano) {
            System.out.println("Almeno uno dei controlli è vero");
        }

        if (!booleano) {
            System.out.println("Il booleano è falso");
        }

        // Liste
        ArrayList<Integer> lista2 = new ArrayList<>();
        lista2.add(1);
        lista2.add(2);
        lista2.add(3);
        lista2.add(4);
        lista2.add(5);
        System.out.println("Primo elemento della lista: " + lista2.get(0));

        // Matrici
        int[][] matrice = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        System.out.println("Elemento nella riga 2, colonna 3: " + matrice[1][2]);

        // Funzioni
        int risultato = somma(3, 4);
        System.out.println("Risultato della somma: " + risultato);

        // Classi e oggetti
        Persona persona1 = new Persona("Mario", 30);
        persona1.saluta();

        // Gestione delle eccezioni (try-catch)
        try {
            risultato = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Impossibile dividere per zero!");
        }

        // Lavorare con i file (lettura, scrittura)
        // Scrivere su un file
        try (java.io.FileWriter file = new java.io.FileWriter("test.txt")) {
            file.write("Hello, world!");
        } catch (java.io.IOException e) {
            System.out.println("Errore durante la scrittura del file");
        }

        // Leggere da un file
        try (java.io.FileReader file = new java.io.FileReader("test.txt");
             java.io.BufferedReader reader = new java.io.BufferedReader(file)) {
            String contenuto = reader.readLine();
            System.out.println("Contenuto del file: " + contenuto);
        } catch (java.io.IOException e) {
            System.out.println("Errore durante la lettura del file");
        }

        // Utilizzo dei moduli e delle librerie
        System.out.println("Radice quadrata di 16: " + Math.sqrt(16));

        // Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo)
        // Ereditarietà
        Cane cane = new Cane("Fido");
        cane.parla();

        // Incapsulamento
        Auto auto = new Auto("Toyota", "Corolla");
        System.out.println("Anno di produzione: " + auto.getAnno());

        // Polimorfismo
        Forma rettangolo = new Rettangolo(5, 4);
        System.out.println("Area del rettangolo: " + rettangolo.calcolaArea());

        Forma cerchio = new Cerchio(3);
        System.out.println("Area del cerchio: " + cerchio.calcolaArea());

        // Generazione di numeri casuali
        Random random = new Random();
        int numeroCasuale = random.nextInt(100) + 1;
        System.out.println("Numero casuale generato: " + numeroCasuale);

        // Gestione delle stringhe (metodi utili, formattazione)
        stringa = "hello world";
        System.out.println("Stringa in maiuscolo: " + stringa.toUpperCase());

        // Manipolazione di date e orari
        java.time.LocalDateTime dataCorrente = java.time.LocalDateTime.now();
        System.out.println("Data e ora corrente: " + dataCorrente);

        // Utilizzo dei set e dei dizionari
        java.util.HashSet<Integer> insieme = new java.util.HashSet<>();
        insieme.add(1);
        insieme.add(2);
        insieme.add(3);
        insieme.add(4);
        insieme.add(5);
        System.out.println("Insieme: " + insieme);

        // Espressioni regolari
        String testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone";
        java.util.regex.Pattern pattern = java.util.regex.Pattern.compile("\\bgatt\\w*");
        java.util.regex.Matcher matcher = pattern.matcher(testo);
        System.out.print("Parole che iniziano con 'gatt': ");
        while (matcher.find()) {
            System.out.print(matcher.group() + " ");
        }
        System.out.println();

        // Sostituzione di parole con altre parole utilizzando le espressioni regolari
        String nuovoTesto = testo.replaceAll("cane", "papero");
        System.out.println("Testo con 'cane' sostituito da 'papero': " + nuovoTesto);
    }

    // Funzione somma
    public static int somma(int a, int b) {
        return a + b;
    }
}

// Classe Persona
class Persona {
    String nome;
    int eta;

    Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    void saluta() {
        System.out.println("Ciao, mi chiamo " + this.nome + " e ho " + this.eta + " anni");
    }
}

// Classe Auto
class Auto {
    String marca;
    String modello;
    private int anno;

    Auto(String marca, String modello) {
        this.marca = marca;
        this.modello = modello;
        this.anno = 2022;
    }

    int getAnno() {
        return this.anno;
    }
}

// Classe Forma
abstract class Forma {
    abstract double calcolaArea();
}

// Classe Rettangolo
class Rettangolo extends Forma {
    double base;
    double altezza;

    Rettangolo(double base, double altezza) {
        this.base = base;
        this.altezza = altezza;
    }

    @Override
    double calcolaArea() {
        return this.base * this.altezza;
    }
}

// Classe Cerchio
class Cerchio extends Forma {
    double raggio;

    Cerchio(double raggio) {
        this.raggio = raggio;
    }

    @Override
    double calcolaArea() {
        return Math.PI * Math.pow(this.raggio, 2);
    }
}

// Classe Cane (ereditarietà da Animale)
class Animale {
    String nome;

    Animale(String nome) {
        this.nome = nome;
    }

    void parla() {
        System.out.println("L'animale parla");
    }
}

class Cane extends Animale {
    Cane(String nome) {
        super(nome);
    }

    @Override
    void parla() {
        System.out.println("Bau bau!");
    }
}
