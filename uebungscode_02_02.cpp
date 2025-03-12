// Zur Blatt 02 Aufgabe 03

#include <cmath>
#include <iostream>
#include <string>
#include <vector>




// Druckt einen Text aus
void drucke_text(const std::string& text);

// Druckt eine Ganzzahl aus
void drucke_ganzzahl(int ganzzahl);

// Druckt eine Kommazahl aus
void drucke_kommazahl(double gleitkommazahl);

// Liest ein Wort von der Konsole ein
std::string lies_wort();

// Liest eine Ganzzahl von der Konsole ein
int lies_ganzzahl();

// Liest eine Gleitkommazahl von der Konsole ein
double lies_gleitkommazahl();

// Ablauf Diagramm 1
void ablauf_diagramm_1(){
  int x = lies_ganzzahl();
    x=x * x;
      drucke_ganzzahl(x);
}
// Ablauf Diagramm 2
void ablauf_diagramm_2(){
  int x = lies_ganzzahl();
  while (x <=1) {
    x=x-2;               // wenn while Bedingung nicht erfüllt
  }
  drucke_ganzzahl(x);
}

// Programm 1
void programm_1() {
int x = lies_ganzzahl();
int y = x ;           // weist zu y = Input, ohne die Input Variable zu vergessen
y = y + 17 ;
y = y * 3 ;      
y = y % 2 ;     // dividiert, damit 
drucke_ganzzahl (y);
}

void programm_2() {
  std::string text = "Das Modul Algorithmen und Programmierung ist so konzipert, dass die Konzepte und Methodiken\
der objektorientierten Programmierung im Vordergrund stehen. Die hier vorgestellte\
Programmiersprache C++ nimmt die Rolle einer Beispielprogrammiersprache ein, in der die\
diskutierten Konzepte (meist mehr, selten weniger) nachvollziehbar und effizient umgesetzt\
sind. Das Modul soll so verstanden werden, dass es den Teilnehmer:innen im Anschluss an\
dieses Modul leicht fällt andere, objektorientierte Programmiersprachen zu erlernen. Hier soll\
man sich nur noch die Frage stellen: Wie setzten andere Programmiersprachen die wesentlichen\
Konzepte um und was gibt es bei der Sprachsyntax zu beachten?";
  int n = length(text); // Wie weise ich jedem Buchstaben ein T[i] zu?
  int i = 0 ; // index
  int s = 0 ; // counter Satzzeichen
  while (i<=n){
    if (T[i]='.' or T[i]='!' or T[i]='?') ; // || or
    {
      s = s + 1 ;
    }
    i = i + 1 ;
  }
  drucke_ganzzahl(s) ;
 
}


void programm_3() {
  std::vector<int> zahlen = {42, 69, 420, 99, -444, 9014}; // 42=L[0], 69=L[1], usw.
    int n = Anzahl von zahlen in zahlen // sizeof[zahlen]?
     int i = 0;
    int s = 0;
      while(i<= n)  // while Schleife, bist i genau so groß ist wie n
      {
      s = s + L[i] ;
      i = i+1 ;
      }
  drucke_kommazahl(s.0/(n+1)); // .0, damit eine Zahl vom Typ double dabei gegeben ist, um eine Kommazahl auszugeben
}


void programm_4() {
 int x = lies_ganzzahl() ;
 int t = x ;
 t = t*t ;
 t = x*t ;
 t = t*t ;
 t = t*t ;
 t = x*t ;
 t = t*t ;
 t = x*t ;
 t = t*t ;
 t = t*t ;
 t = x*t ;
 t = t*t ; //jede Multiplikation mit x erhöht den Exponenten um 1, jede Multiplikation mit t verdoppelt den Exponenten
}
 /* ansonsten auch möglich?
 int x = lies_ganzzahl() ; // Input für Basis
 int y = lies_ganzzahl() ; // Input für Exponent
 int t = x               ; // so bleibt x unverändert
 int n = 0               ; // counter für die gemachten Rechenoperationen
  while (n<y) {          ; // while Schleife; solange n nicht gleich dem Exponenten wird mit x multipliziert
    t = t*x ;
    n+1 ;
  }
  drucke_ganzzahl(t) ;
*/

int main() {
  ablauf_diagramm_1();
  ablauf_diagramm_2();
  programm_1();
  programm_2();
  programm_3();
  programm_4();
}


/************************************/
/*                                  */
/*   MAGIE   MAGIE   MAGIE  MAGIE   */
/*                                  */
/************************************/

void drucke_text(const std::string& text) {
  std::cout << text << std::endl;
}

void drucke_ganzzahl(int ganzzahl) {
  std::cout << std::to_string(ganzzahl) << std::endl;
}

void drucke_kommazahl(double gleitkommazahl) {
  std::cout << std::to_string(gleitkommazahl) << std::endl;
}

std::string lies_wort() {
  std::string wort;
  std::cin >> wort;
  return wort;
}

int lies_ganzzahl() {
  std::string wort;
  std::cin >> wort;
  int ganzzahl = 0;
  try {
    ganzzahl = std::stoi(wort);
  } catch (const std::invalid_argument& e) {
    ganzzahl = -1000;
  }
  return ganzzahl;
}

double lies_gleitkommazahl() {
  std::string wort;
  std::cin >> wort;
  double lies_gleitkommazahl = 0.0;
  try {
    lies_gleitkommazahl = std::stod(wort);
  } catch (const std::invalid_argument& e) {
    lies_gleitkommazahl = NAN; // See https://en.cppreference.com/w/cpp/numeric/math/NAN
  }
  return lies_gleitkommazahl;
}
