
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 12 Nov 2022 
  * @brief Write a program that reads a number n and prints the “multiplication
  * table” of n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31170
  */

#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for (int i{1}; i <= 10; i++) {
    std::cout << n << "*" << i << " = " << n * i << std::endl;
  }
  return 0;
}
