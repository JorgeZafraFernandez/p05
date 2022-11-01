/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Zafra Fernandez
 * @date Oct 31th 2022
 * @brief Average
 *
 * This program takes an input of numbers and finds their average.
 * @see https://jutge.org/problems/P78142_en
 */


#include <iostream>

int main() {
  std::vector<double>inputs;
  double sumatory;
  while(std::cin!= NULL) {
    double input;
    std::cin >> input;
    inputs.emplace_back(input)
   }
  int size;
  for ( double x : inputs) {
    sumatory = sumatory + x;
    ++size;
  }
  double average = sumatory / size;
  std::cout << average << std::endl;
}
