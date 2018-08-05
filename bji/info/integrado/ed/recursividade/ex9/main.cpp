/* Faça uma função que verifique se um valor inteiro está presente em um vetor */
#include <iostream>
using namespace std;

bool contem(int v[], int t, int n) {
  if (v[t] == n)
    return true;
  else
    if(t == 0)
      return false;
    else
      return contem(v, t - 1, n);
}

bool contem_(int v[], int t, int e) {
  for(int i = 0; i < t; i++) {
    if(v[i] == e)
      return true;
  }
  return false;
}

int main() {
  int v[] = {1, 2, 3, 4, 5};
  cout << contem(v, sizeof(v)/sizeof(int), 5) << endl;
  return 0;
}
