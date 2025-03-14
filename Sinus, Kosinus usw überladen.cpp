#include <iostream>
#include <string>

// Sinus ohne User Toleranzinput
double sin_approx(double x) {
    double sinus = 0.0;        // Ergebnis der Taylor-Reihe für Sinus
    double summand = x;        // Startwert für den ersten Summanden
    int n = 1;                 // Zähler für die Berechnung des Faktors
    int iteration = 10;        // Zahl der Iterationen

    while (iteration != 0) {  // Schleife läuft, bis iteration = 0 ist; also 6 mal
        sinus += summand;
        summand = -(summand * x * x) / ((2 * n) * (2 * n + 1));  // Berechnung des nächsten Summanden
        n++;
        iteration = iteration - 1; // iteration wird heruntergezählt
    }
    return sinus;
}

// Sinus mit User Toleranzinput
double sin_approx(double x, int iteration) {
    double sinus = 0.0;        // Ergebnis der Taylor-Reihe für Sinus
    double summand = x;        // Startwert für den ersten Summanden
    int n = 1;                 // Zähler für die Berechnung des Faktors

    while (iteration != 0) {  // Schleife läuft, bis iteration = 0 ist; also 6 mal
        sinus += summand;
        summand = -(summand * x * x) / ((2 * n) * (2 * n + 1));  // Berechnung des nächsten Summanden
        n++;
        iteration = iteration - 1; // iteration wird heruntergezählt
    }
    return sinus;
}

// Kosinus ohne User Toleranzinput
double cos_approx(double x) {
    double kosinus = 0.0;      // Ergebnis der Taylor-Reihe für Kosinus
    double summand = 1.0;      // Startwert für den ersten Summanden
    int n = 1;                 // Zähler für die Berechnung des Faktors
    int iteration = 10;        // Zahl der Iterationen

    while (iteration != 0) {  // Schleife läuft, bis iteration auf 0 ist
        kosinus += summand;
        summand = -(summand * x * x) / ((2 * n - 1) * (2 * n));  // Berechnung des nächsten Summanden
        n++;
        iteration = iteration - 1; // iteration wird heruntergezählt
    }
    return kosinus;
}

// Kosinus mit User Toleranzinput
double cos_approx(double x, int iteration) {
    double kosinus = 0.0;      // Ergebnis der Taylor-Reihe für Kosinus
    double summand = 1.0;      // Startwert für den ersten Summanden
    int n = 1;                 // Zähler für die Berechnung des Faktors

    while (iteration != 0) {  // Schleife läuft, bis iteration auf 0 ist
        kosinus += summand;
        summand = -(summand * x * x) / ((2 * n - 1) * (2 * n));  // Berechnung des nächsten Summanden
        n++;
        iteration = iteration - 1; // iteration wird heruntergezählt
    }
    return kosinus;
}


// Tangens ohne User Toleranzinput
double tan_approx(double x) {
    double tangens = sin_approx(x) / cos_approx(x) ;
    return tangens ;
}

// Tangens mit User Toleranzinput
double tan_approx(double x, int i) {
    double tangens = sin_approx(x, i) / cos_approx(x, i) ;
    return tangens ;
}


// Kotangensfunktion berechnet mit cos(x) und sin(x)
double cot_approx(double x) {
    double kotangens = cos_approx(x) / sin_approx(x) ;
    return kotangens ;
}

// Kotangensfunktion berechnet mit cos(x) und sin(x)
double cot_approx(double x, int i) {
    double kotangens = cos_approx(x, i) / sin_approx(x, i) ;
    return kotangens ;
}

int main() {
    
    double x;
    int i;
    std::string auswahl;
    std::string y_n ;
    std::string Ende = "Ende" ;

        // Eingabeaufforderung für die Zahl
        std::cout << "Gib eine Zahl ein, damit ich den Sinus, Kosinus, Tangens oder Kotangens berechne: ";
        std::cin >> x;

        // Auswahl, ob Sinus oder Kosinus berechnet werden soll
        std::cout << "Soll ich den Sinus, Kosinus, Tangens oder Kotangens ausrechnen? (sin/cos/tan/cot): ";
        std::cin >> auswahl;

        // Überprüfung der Auswahl und Berechnung
        if (auswahl == "sin") {
            std::cout << "möchtest Du die Anzahl der Iterationen für die Berechnung angeben? (y/n)" << std::endl; // Abfrage nach Iteration
            std::cin >> y_n ;

            if (y_n == "n") {                                                       // Wenn "nein", dann sinus mit standard Iteration 10
                double sinus_wert = sin_approx(x);
                std::cout << "Sinus: " << sinus_wert << std::endl;
                } else {                                            // Wenn "ja", dann sinus mit Userinput i Iteration
                   std::cout << "wie oft soll iteriert werden?" << std::endl;
                   std::cin >> i ;
                   double sinus_wert = sin_approx(x, i) ;
                   std::cout << "Sinus: " << sinus_wert << std::endl;
                }
        } else if (auswahl == "cos") {
            std::cout << "möchtest Du die Anzahl der Iterationen für die Berechnung angeben? (y/n)" << std::endl; // Abfrage nach Iteration
            std::cin >> y_n ;

            if (y_n == "n") {                                                       // Wenn "nein", dann Kosinus mit standard Iteration 10
                double kosinus_wert = cos_approx(x);
                std::cout << "Kosinus: " << kosinus_wert << std::endl;
                } else {                                            // Wenn "ja", dann Kosinus mit Userinput i Iteration
                   std::cout << "wie oft soll iteriert werden?" << std::endl;
                   std::cin >> i ;
                   double kosinus_wert = cos_approx(x, i) ;
                   std::cout << "Kosinus: " << kosinus_wert << std::endl;
                }
        } else if (auswahl == "tan") {
            std::cout << "möchtest Du die Anzahl der Iterationen für die Berechnung angeben? (y/n)" << std::endl; // Abfrage nach Iteration
            std::cin >> y_n ;

            if (y_n == "n") {                                                       // Wenn "nein", dann Tangens mit standard Iteration 10
                double tangens_wert = tan_approx(x);
                std::cout << "Tangens: " << tangens_wert << std::endl;
                } else {                                            // Wenn "ja", dann Tangens mit Userinput i Iteration
                   std::cout << "wie oft soll iteriert werden?" << std::endl;
                   std::cin >> i ;
                   double tangens_wert = tan_approx(x, i) ;
                   std::cout << "Tangens: " << tangens_wert << std::endl;
                }
        } else if (auswahl == "cot") {
            std::cout << "möchtest Du die Anzahl der Iterationen für die Berechnung angeben? (y/n)" << std::endl; // Abfrage nach Iteration
            std::cin >> y_n ;

            if (y_n == "n") {                                                       // Wenn "nein", dann Kotangens mit standard Iteration 10
                double kotangens_wert = cos_approx(x);
                std::cout << "Kotangens: " << kotangens_wert << std::endl;
                } else {                                            // Wenn "ja", dann Kotangens mit Userinput i Iteration
                   std::cout << "wie oft soll iteriert werden?" << std::endl;
                   std::cin >> i ;
                   double kotangens_wert = cot_approx(x, i) ;
                   std::cout << "Kotangens: " << kotangens_wert << std::endl;
                }
        } else {
            std::cout << "Ungültige Eingabe. Bitte 'sin' oder 'cos' eingeben." << std::endl;
        }
    
    
    return 0;
}