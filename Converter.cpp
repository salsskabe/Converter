#include <iostream>
#include <cmath>
using namespace std;

int main(){

float pesos = 0;
float realis = 0;
float soles = 0;

float eur = 0;


cout << "Enter number of Colombian Pesos: " << endl;
cin >> pesos;

cout << "Enter number of Brazilian Reais: " << endl;
cin >> realis;


cout << "Enter number of Peruvian Soles: " << endl;
cin >> soles;

// 1 columbian peso 0.00021 eur
// 1 realis 0.16 eur
// 1 soles 0.24 eur
float pesostoeur = 0.00021;
float realistoeur = 0.16;
float solestoeur = 0.24;


eur = (pesostoeur * pesos) + (realistoeur * realis) + (solestoeur * soles);

cout << "EUR = € " << eur;

}