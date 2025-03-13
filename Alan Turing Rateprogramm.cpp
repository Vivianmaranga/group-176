// INPUT: Geratenes Alter
// OUTPUT: Rückmeldung ob geratenes Altes korrekt / zu klein / zu groß
// ALGORITHMUS (Dezeitiges Alter raten):
#include<iostream>
#include<string>

int main() {
int Alter = 112 ; // alternativ: current_year - 1912?
int Rateversuch;
std::cout<<"Wie alt wäre Alan Turing heute? " ;
std::cin>>Rateversuch;

while (Rateversuch != Alter) {
     if (Rateversuch < Alter) 
    {
        std::cout<<"Turing ist älter: " ;
    }
   else 
    if (Rateversuch > Alter) 
    {
        std::cout << "soo alt war Alan Turing nicht: " ;
    }
        std::cout << "wie alt wäre Alan Turing heute? ";
        std::cin >> Rateversuch ;
        }

std::cout<<"Richtig!" ;
return 0;}
