#include "Constante.h"
#include <iostream>
using namespace std;

Constante::~Constante()
{
    //dtor
}

Constante::Constante(float v)
{
  _constante = v;
}

float Constante::calculer() {
    return _constante;
}

void Constante::afficher() {
  cout << "resultat : " << _constante;
}
