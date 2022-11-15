/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 12 Nov 2022 
  * @brief Write a program that reads a number and prints it reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327
  */

#include <iostream>
#include <algorithm>

int main() {
  std::string n;
  std::cin >> n;
  std::reverse(n.begin(),n.end());
  std::cout << n << std::endl;
  return 0;
}
