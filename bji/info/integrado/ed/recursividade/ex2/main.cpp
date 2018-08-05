/* Faça uma função que imprima o somatório dos números entre n e m, onde n e m são números inteiros positivos */
#include <iostream>
using namespace std;

int somatorio(int me, int ma) {
  if (ma > me)
    return ma + somatorio(me, ma - 1);
  else
    return me;
}

int somatorio_(int me, int ma) {
  int r = 0;
  for (int i = me; i <= ma; i++) {
    r += i;
  }
  return r;
}

int main() {
  cout << somatorio(5,10) << endl;
  return 0;
}
