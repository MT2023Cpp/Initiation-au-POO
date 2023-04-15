#include <iostream>
using std::cout;
// using namespace std; Ne pas utiliser car elle charge tout l'espace de nom dans la mémoire.
// Création d'un nouveau type Quotient (Déclaration / interface)
class Quotient{
public:
  Quotient(); // Constructeur par défaut
  Quotient(int pnum, int pden); // Constructeur paramétré
  void print(); // Afficher le quotient 
private:
  int num;
  int den;
};

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

int main (){
  Quotient q;
  Quotient q1(1, 0);

  q.print(); cout << "\n";
  q1.print();
  return 0;
}