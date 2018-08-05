/* Faça uma função que verifique se um determinado número é primo */
#include <iostream>
using namespace std;

bool verificarPrimo(int n, int aux) {
  if (aux == 1)
    return true;
  else if(n % aux == 0)
    return false;
  else
    return verificarPrimo(n, aux - 1);
}

bool primo(int n) {
  return verificarPrimo(n, n/2);
}

bool primo_(int n) {
  int r = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      r = false;
  }
  return r;
}

int main() {

  cout << primo(17) << endl;
  return 0;
}
