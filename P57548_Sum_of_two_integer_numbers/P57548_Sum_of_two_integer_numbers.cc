/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Zafra Fernandez
 * @date Oct 31th 2022
 * @brief Sum of two integer numbers
 *
 * This program takes two integers, adds them together, and outputs the result in a cout.
 * @see https://jutge.org/problems/P57548_en
 */


#include <iostream>

int main() {
  int first_integer, second_integer;
  std::cin >> first_integer >> second_integer;
  std::cout << first_integer + second_integer << std::endl;
}
