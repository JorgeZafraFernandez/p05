/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Zafra Fernández
 * @date Oct 30th 2022
 * @brief desinflation
 * The objective is to, given an uppercase letter as input, output it's lowercase variant.
 *
 * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
 */


#include <iostream>

int main() {
  char uppercase_letter;
  std::cout << "Write an uppercase letter: ";
  std::cin >> uppercase_letter;
  int uppercase_integer{static_cast<int>(uppercase_letter)};
  uppercase_integer = uppercase_integer + 32;
  if (uppercase_integer > 122 | uppercase_integer < 97) {
    std::cout << "That is not an uppercase letter!" << std::endl;
  } else {
    char lowercase_letter{static_cast<char>(uppercase_integer)};
    std::cout << lowercase_letter << std::endl;
  }
}
