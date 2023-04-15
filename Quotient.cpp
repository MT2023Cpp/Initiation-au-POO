#include "Quotient.hpp"
#include <iostream>

using std::cout;

// using namespace std; Ne pas utiliser car elle charge tout l'espace de nom dans la mémoire.

// L'implémentation
Quotient::Quotient():num(0), den(1){
  cout << "Constructeur par defaut\n";
}
  /*Quotient(){
    num = 0;
    den = 1;
  }*/
  
Quotient::Quotient(int pnum, int pden):num(pnum), den(pden){
  if(den == 0){
    den = 1;
  }
  cout << "Constructeur parametre\n";
}
  
void Quotient::print(){
  cout << num << "/" << den;
}