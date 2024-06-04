#include <iostream>

int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombian Peosos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Pesos conversion rate: 0.056
  // Reais conversion rate: 0.19
  // Soles conversion rate: 0.27
  
  dollars = 0.056 * pesos + 0.19 * reais + 0.27 * soles;

  std::cout << "Total USD = $" << dollars << "\n";
}
