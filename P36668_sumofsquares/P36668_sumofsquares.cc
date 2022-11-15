
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 12 Nov 2022
  * @brief Write a program that reads a natural number n, and prints the result
  * of the following sum: 12 + 22 + … + (n−1)2 + n2
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36668
  */

#include <iostream>

int main(){
  int n, sum{0};
  std::cin >> n;
  for (int i{0}; i<=n; i++) {
    sum = sum + (i*i);
  }
  std::cout << sum << std::endl;
  return 0;
}
