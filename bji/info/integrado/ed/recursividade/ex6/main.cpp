/* Faça uma função que imprima todos os números de um vetor */
#include <iostream>
using namespace std;

void imprimir(int v[], int t) {
  cout << v[t - 1] << endl;
  if (t > 1) {
    imprimir(v, t - 1);
  }
}

void imprimir_(int v[], int t) {
  for (int i = t - 1; i >= 0; i--) {
    cout << v[i] << endl;
  }
}

int main() {
  int v[] = {2, 4, 5, 6, 7, 8, 9, 10};
  imprimir_(v, sizeof(v)/sizeof(int));
  return 0;
}
