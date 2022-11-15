/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 13 Nov 2022
  * @brief Write a program that reads a sequence of characters ended with a
  * period and prints the number of letters ‘a’ in the sequence.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969
  */

#include <iostream>
#include <string>

int main() {
  std::string frase;
  getline (std::cin, frase);
  std::cout << frase << std::endl;
  return 0;
}
