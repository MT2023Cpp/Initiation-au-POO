#include <iostream>
using std::cout;
// using namespace std; Ne pas utiliser car elle charge tout l'espace de nom dans la mémoire.
// Création d'un nouveau type Quotient
class Quotient{
public:
  // Constructeur par défaut
  Quotient():num(0), den(1){
    cout << "Constructeur par defaut\n";
  }
  /*Quotient(){
    num = 0;
    den = 1;
  }*/
  // Constructeur paramétré
  Quotient(int pnum, int pden):num(pnum), den(pden){
    if(den == 0){
      den = 1;
    }
    cout << "Constructeur parametre\n";
  }
  // Afficher le quotient 
  void print(){
    cout << num << "/" << den;
  }
private:
  int num;
  int den;
};

int main (){
  Quotient q;
  Quotient q1(1, 0);

  q.print(); cout << "\n";
  q1.print();
  return 0;
}