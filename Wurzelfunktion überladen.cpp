#include <iostream>
#include <string>

// Funktion zur Approximation der Wurzel ohne user input für Iteration
double Wurzel(double x) { // x ist der input für die Wurzel
    int i = 5 ;
    double t = x ;         // Startwert wird gesetzt
     while (i > 0) {       // iteriert eine definierte Menge von Schleifen
        t = (1.0/2.0)*(t + x/t); // ausführen der gegebenen Operation
        i = i-1 ;            // setzt die Iteration um 1 herab
    }
    return t ;
}

// Funktion zur Approximation der Wurzel mit User Input für Iterationen
double Wurzel(double x, int i) { // x ist der input für die Wurzel; i für die Iterationen
    double t = x ;         // Startwert wird gesetzt
     while (i > 0) {       // iteriert eine definierte Menge von Schleifen
        t = (1.0/2.0)*(t + x/t); // ausführen der gegebenen Operation
        i = i-1 ;            // setzt die Iteration um 1 herab
    }
    return t ;
}

int main(){
    std::string eingabe ;
    double x ;
    int i ;
    // Eingabe
    std::cout << "Gib mir eine Zahl > 0 zum Berechnen der Wurzel" << std::endl;
    std::cin >> x;
    std::cout << "möchtest Du die Wurzel ungenau, genau oder präzise?" << std::endl;
    std::cin >> eingabe; 
    
    if (eingabe == "ungenau") {
        double wurzelwert = Wurzel(x);
        std::cout << "dein ungenauer Wurzelwert ist: " << wurzelwert << std::endl;
    } else if (eingabe == "genau") {
        double wurzelwert = Wurzel(x, 5);
        std::cout << "dein genauer Wurzelwert ist: " << wurzelwert << std::endl;
    } else if (eingabe == "präzise") {
       double wurzelwert = Wurzel(x, 20);
        std::cout << "dein präziser Wurzelwert ist: " << wurzelwert << std::endl; 
    }
    

    return 0;
}