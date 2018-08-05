/* Faça uma função que realize o somatório dos números entre 1 e n, onde n é maior que 1 */
#include <iostream>
using namespace std;

int somatorio(int n) {
  if (n > 1)
    return n + somatorio(n - 1);
  else
    return 1;
}

int somatorio_(int n) {
  int r = 0;
  for (int i = 1; i <= n; i++) {
    r += i;
  }
  return r;
}

int main() {
  cout << somatorio(4) << endl;
  return 0;
}
