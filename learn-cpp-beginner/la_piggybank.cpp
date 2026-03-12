#include <iostream>
using namespace std;

int main() {
  
double pesos, reais, soles, dollars;
  
cout << "Enter number of Colombian Pesos:\n";
cin >> pesos;

    cout << "Enter number of Brazilian Reais:\n";
cin >> reais;

cout << "Enter number of Peruvian Soles:\n";
cin >> pesos;

dollars = (0.049 * pesos) + (0.19 * reais) + (0.27 * soles);

cout << "Total sum in dollars = $ " << dollars << endl; 



}