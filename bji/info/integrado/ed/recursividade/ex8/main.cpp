/* Faça uma função que inverta a ordem dos valores de um vetor */
#include <iostream>
using namespace std;

void inverter(int v[], int t, int a) {
  if(t - 1 > a) {
    int aux = v[t - 1];
    v[t - 1] = v[a];
    v[a] = aux;
    inverter(v, t - 1, a + 1);
  }
}

void inverter_(int v[], int t) {
  t--;
  for(int i = t; i > t/2; i--) {
    int aux = v[i];
    v[i] = v[t-i];
    v[t-i] = aux;
  }
}

int main() {
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int t = sizeof(v)/sizeof(int);
  inverter(v, t);
  for(int i = 0; i < t; i++) {
    cout << v[i] << endl;
  }
  return 0;
}
