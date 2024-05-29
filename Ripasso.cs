using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        // Dichiarazione di variabili
        int numero = 10;
        string stringa = "Ciao mondo";
        bool booleano = true;

        // Assegnazione
        numero = 20;
        stringa = "Hello world";
        booleano = false;

        // Input/output
        Console.Write("Inserisci il tuo nome: ");
        string nome = Console.ReadLine();
        Console.WriteLine("Ciao " + nome);

        // Condizioni
        if (numero > 10)
        {
            Console.WriteLine("Il numero è maggiore di 10");
        }
        else if (numero == 10)
        {
            Console.WriteLine("Il numero è uguale a 10");
        }
        else
        {
            Console.WriteLine("Il numero è minore di 10");
        }

        // Cicli
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(i);
        }

        // Utilizzo di while
        numero = 0;
        while (numero < 5)
        {
            Console.WriteLine(numero);
            numero++;
        }

        // Utilizzo di do-while
        string scelta;
        do
        {
            Console.Write("Vuoi continuare? (s/n): ");
            scelta = Console.ReadLine().ToLower();
        } while (scelta != "n");

        // Utilizzo di for con lista
        List<int> lista = new List<int> { 1, 2, 3, 4, 5 };
        foreach (int elemento in lista)
        {
            Console.WriteLine(elemento);
        }

        // Utilizzo di for con range
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(i);
        }

        // Utilizzo di for con enumerate per ottenere indice e valore
        for (int i = 0; i < lista.Count; i++)
        {
            Console.WriteLine("Indice: " + i + " Valore: " + lista[i]);
        }

        // Utilizzo di for con dizionario
        Dictionary<string, string> dizionario = new Dictionary<string, string>
        {
            { "chiave1", "valore1" },
            { "chiave2", "valore2" },
            { "chiave3", "valore3" }
        };
        foreach (var kvp in dizionario)
        {
            Console.WriteLine("Chiave: " + kvp.Key + " Valore: " + kvp.Value);
        }

        // Switch
        int valore = 2;
        switch (valore)
        {
            case 1:
                Console.WriteLine("Valore è 1");
                break;
            case 2:
                Console.WriteLine("Valore è 2");
                break;
            default:
                Console.WriteLine("Valore non è né 1 né 2");
                break;
        }

        // And, Or e Not
        if (numero > 0 && stringa == "Hello")
        {
            Console.WriteLine("Entrambi i controlli sono veri");
        }

        if (numero < 0 || booleano == true)
        {
            Console.WriteLine("Almeno uno dei controlli è vero");
        }

        if (!booleano)
        {
            Console.WriteLine("Il booleano è falso");
        }

        // Liste
        lista = new List<int> { 1, 2, 3, 4, 5 };
        Console.WriteLine("Primo elemento della lista: " + lista[0]);

        // Array
        // Matrici
        int[,] matrice = new int[,] { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        Console.WriteLine("Elemento nella riga 2, colonna 3: " + matrice[1, 2]);

        // Funzioni
        int somma(int a, int b)
        {
            return a + b;
        }

        int risultato = somma(3, 4);
        Console.WriteLine("Risultato della somma: " + risultato);

        // Classi e oggetti
        Persona persona1 = new Persona("Mario", 30);
        persona1.Saluta();

        // Gestione delle eccezioni (try-except)
        try
        {
            risultato = 10 / 0;
        }
        catch (DivideByZeroException)
        {
            Console.WriteLine("Impossibile dividere per zero!");
        }

        // Lavorare con i file (lettura, scrittura)
        // Scrivere su un file
        File.WriteAllText("test.txt", "Hello, world!");

        // Leggere da un file
        string contenuto = File.ReadAllText("test.txt");
        Console.WriteLine("Contenuto del file: " + contenuto);

        // Utilizzo dei moduli e delle librerie
        Console.WriteLine("Radice quadrata di 16: " + Math.Sqrt(16));

        // Concetti avanzati di programmazione orientata agli oggetti (ereditarietà, incapsulamento, polimorfismo)
        // Ereditarietà
        Cane cane = new Cane("Fido");
        cane.Parla();

        // Incapsulamento
        Auto auto = new Auto("Toyota", "Corolla");
        Console.WriteLine("Anno di produzione: " + auto.GetAnno());

        // Polimorfismo
        Forma rettangolo = new Rettangolo(5, 4);
        Console.WriteLine("Area del rettangolo: " + rettangolo.CalcolaArea());

        Forma cerchio = new Cerchio(3);
        Console.WriteLine("Area del cerchio: " + cerchio.CalcolaArea());

        // Utilizzo delle decorazioni (decorators)
        SalutaConDecoratore(Saluta);

        // Generazione di numeri casuali
        Random random = new Random();
        int numeroCasuale = random.Next(1, 101);
        Console.WriteLine("Numero casuale generato: " + numeroCasuale);

        // Gestione delle stringhe (metodi utili, formattazione)
        stringa = "hello world";
        Console.WriteLine("Stringa in maiuscolo: " + stringa.ToUpper());

        // Manipolazione di date e orari
        DateTime dataCorrente = DateTime.Now;
        Console.WriteLine("Data e ora corrente: " + dataCorrente);

        // Utilizzo dei set e dei dizionari
        HashSet<int> insieme = new HashSet<int> { 1, 2, 3, 4, 5 };
        Console.WriteLine("Insieme: " + string.Join(", ", insieme));

        // Espressioni regolari
        string testo = "Questo è un testo con alcune parole chiave: gatto, cane, elefante, gattino, gattone";
        var paroleGatto = System.Text.RegularExpressions.Regex.Matches(testo, @"\bgatt\w*")
            .Cast<System.Text.RegularExpressions.Match>()
            .Select(m => m.Value)
            .ToList();
        Console.WriteLine("Parole che iniziano con 'gatt': " + string.Join(", ", paroleGatto));

        string nuovoTesto = System.Text.RegularExpressions.Regex.Replace(testo, "cane", "papero");
        Console.WriteLine("Testo con 'cane' sostituito da 'papero': " + nuovoTesto);
    }

    static void Saluta()
    {
        Console.WriteLine("Ciao!");
    }

    static void SalutaConDecoratore(Action funzione)
    {
        Console.WriteLine("Prima di eseguire la funzione");
        funzione();
        Console.WriteLine("Dopo aver eseguito la funzione");
    }

    class Persona
    {
        public string Nome { get; set; }
        public int Eta { get; set; }

        public Persona(string nome, int eta)
        {
            Nome = nome;
            Eta = eta;
        }

        public void Saluta()
        {
            Console.WriteLine("Ciao, mi chiamo " + Nome + " e ho " + Eta + " anni");
        }
    }

    class Animale
    {
        public string Nome { get; set; }

        public Animale(string nome)
        {
            Nome = nome;
        }

        public virtual void Parla()
        {
            // Implementazione vuota
        }
    }

    class Cane : Animale
    {
        public Cane(string nome) : base(nome) { }

        public override void Parla()
        {
            Console.WriteLine("Bau bau!");
        }
    }

    class Auto
    {
        public string Marca { get; set; }
        public string Modello { get; set; }
        private int Anno { get; set; }

        public Auto(string marca, string modello)
        {
            Marca = marca;
            Modello = modello;
            Anno = 2022;
        }

        public int GetAnno()
        {
            return Anno;
        }
    }

    abstract class Forma
    {
        public abstract double CalcolaArea();
    }

    class Rettangolo : Forma
    {
        public double Base { get; set; }
        public double Altezza { get; set; }

        public Rettangolo(double base, double altezza)
        {
            Base = base;
            Altezza = altezza;
        }

        public override double CalcolaArea()
        {
            return Base * Altezza;
        }
    }

    class Cerchio : Forma
    {
        public double Raggio { get; set; }

        public Cerchio(double raggio)
        {
            Raggio = raggio;
        }

        public override double CalcolaArea()
        {
            return Math.PI * Raggio * Raggio;
        }
    }
}
