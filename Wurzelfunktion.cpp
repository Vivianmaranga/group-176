#include <iostream>
#include <string>

// Funktion zur Approximation der Wurzel
double Wurzel(double x, int i) { // x ist der input für die Wurzel; i für die Iterationen
    double t = x ;         // Startwert wird gesetzt
     while (i > 0) {       // iteriert eine definierte Menge von Schleifen
        t = (1.0/2.0)*(t + x/t); // ausführen der gegebenen Operation
        i = i-1 ;            // setzt die Iteration um 1 herab
    }
    return t ;
}

int main(){
    double x ;
    int i ;
    // Eingabe
    std::cout << "Gib mir eine Zahl > 0 zum Berechnen der Wurzel" << std::endl;
    std::cin >> x;
    std::cout << "wie oft soll die Funktion iteriert werden?" << std::endl;
    std::cin >> i;

    // Funktion
    double Wurzelwert = Wurzel(x, i);
    std::cout << "die approximierte Wurzel ist: " << Wurzelwert << std::endl;

    return 0;
}