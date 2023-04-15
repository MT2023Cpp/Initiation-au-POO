#include <iostream>
using std::cout;
// using namespace std; Ne pas utiliser car elle charge tout l'espace de nom dans la mémoire.
// Création d'un nouveau type Quotient
class Quotient{
public:
  // Constructeur par défaut
  Quotient():num(0), den(1){}
  /*Quotient(){
    num = 0;
    den = 1;
  }*/
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

  q.print();
  return 0;
}