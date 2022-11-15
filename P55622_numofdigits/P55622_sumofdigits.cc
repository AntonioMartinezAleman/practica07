
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 13 Nov 2022 
  * @brief Write a program that reads a number and prints its number of digits.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P55622
  */

#include <iostream>

int main() {
  int n, digits{0};
  std::cin >> n;
  if ((n / 10) == 0) {
    std::cout << "0"  << std::endl;
    return 0;
  }
  while (n != 0) {
    n = (n / 10);
    digits = digits + 1;
  }
  std::cout << digits << std::endl;
  return 0;
}
