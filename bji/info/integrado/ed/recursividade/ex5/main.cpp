/* Faça uma função que retorne o número da sequência Fibonacci presente na posição x, informada pelo usuário */
#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 2 || n == 1)
    return 1;
  else
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibonacci_(int n) {
  int a = 1;
  int r = 1;
  if (n == 1 || n == 2)
    return r;
  else {
    for (int i = 3; i <= n; i++) {
      r += a;
      a = r - a;
    }
  }
  return r;
}

int main() {
  cout << fibonacci(8) << endl;
  return 0;
}
