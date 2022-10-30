/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Jorge Zafra Fernández
  * @date Oct 30th 2022
  * @brief arithmetic_opertators
  * The program calculates all the operations possible between two
  * integers and then compares them
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */


#include <iostream>

int main() {
  int first_number, second_number;
  std::cout << "Write two numbers: ";
  std::cin >> first_number >> second_number;
  std::cout << first_number << " % " << second_number << " = " << first_number % second_number
            << std::endl;
  std::cout << first_number << " / " << second_number << " = " << first_number / second_number 
            << std::endl;
  std::cout << first_number << " + " << second_number << " = " << first_number + second_number
            << std::endl;
  std::cout << first_number << " - " << second_number << " = " << first_number - second_number
            << std::endl;
  std::cout << first_number << " * " << second_number << " = " << first_number * second_number
            << std::endl;
  std::cout << first_number << " == " << second_number << " = " 
            << (first_number == second_number) << std::endl;
  std::cout << first_number << " >= " << second_number << " = " 
            << (first_number >= second_number) << std::endl;
  std::cout << first_number << " > " << second_number << " = " 
            << (first_number > second_number) << std::endl;
  std::cout << first_number << " <= " << second_number << " = " 
            << (first_number <= second_number) << std::endl;
  std::cout << first_number << " < " << second_number << " = " 
            << (first_number < second_number) << std::endl;
}
