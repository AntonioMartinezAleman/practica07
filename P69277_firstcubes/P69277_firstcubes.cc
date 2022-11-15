
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P72727
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 11 Nov 2022 
  * @brief Write a program that reads a number n, and prints 03,13,…,(n−1)3,n3.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P69277
  */

#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for (int i{0}; i <= n; i++) {
    if (i == n) {
      std::cout << n*n*n << std::endl;
      break;
    }
    std::cout << i*i*i << ",";
  }
  return 0;
}
