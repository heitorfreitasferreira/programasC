#include <bits/stdc++.h>
using namespace std;
#define vetSize 5
int main()
{
  int vet[vetSize] = {5, 9, 6, 7, 1}, aux[vetSize], acum = 0;
  for (size_t i = 0; i < vetSize; i++)
  {
    acum += vet[i];
    aux[i] = acum;
  }
  for (size_t i = 0; i < vetSize; i++)
  {
    cout << "0" << vet[i] << " ";
  }
  cout << endl;
  for (size_t i = 0; i < vetSize; i++)
  {
    cout << aux[i] << " ";
  }

  return 0;
}
