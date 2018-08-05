/* Faça uma função que imprima os números entre 0 e n em ordem crescente, onde n é maior que 0 */
#include <iostream>
using namespace std;

void imprimirAuxiliar(int n, int aux) {
  cout << aux << endl;
  if (aux < n)
    imprimirAuxiliar(n, aux + 1);
}

void imprimir(int n) {
  imprimirAuxiliar(n, 0);
}

void imprimir_(int n) {
  for (int i = 0; i <= n; i++) {
    cout << i << endl;;
  }
}

int main() {
  imprimir(10);
  return 0;
}
