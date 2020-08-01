#include <bits/stdc++.h>
using namespace std;
int main()
{
  int inicio, fim, acumulador = 0, vet[10] = {5, 9, 6, 7, 0, 3, 8, 1, 4, 2};
  cin >> inicio >> fim;
  if (fim <= inicio)
    return 0;
  while (inicio < fim)
  {
    acumulador = acumulador + vet[inicio];
    inicio++;
  }
  cout << acumulador << endl;
  return 0;
}
