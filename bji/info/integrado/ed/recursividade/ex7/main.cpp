/* Faça uma função para verificar o maior elemento presente em um vetor */
#include <iostream>
using namespace std;

int maior(int v[], int t) {
  if (t == 1)
    return v[0];
  else
    if(v[t - 1] > maior(v, t - 1))
      return v[t - 1];
    else
      return maior(v, t - 1);
}

int maior_(int v[], int t) {
  int m = v[0];
  for(int i = 1; i < t; i++) {
    if(v[i] > m)
      m = v[i];
  }
  return m;
}

int main() {
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  cout << maior_(v, sizeof(v)/sizeof(int)) << endl;
}
