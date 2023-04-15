#ifndef QUOTIENT_HPP    // Guard pour le chargement de la bib (if not defined) #pragma once
#define QUOTIENT_HPP

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

#endif