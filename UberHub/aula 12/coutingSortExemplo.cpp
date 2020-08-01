#include <bits/stdc++.h>
using namespace std;
#define vetSize 7
void arrayPrint(unsigned int vet[], int tam)
{
  for (size_t i = 0; i < tam; i++)
  {
    if (i != tam - 1)
      cout << vet[i] << ",";
    else
      cout << vet[i] << endl;
  }
}
int main()
{
  unsigned int vet[vetSize] = {1, 4, 5, 2, 7, 5, 0};
  unsigned int maior = vet[0];
  //descobrindo o maior valor do vetor
  for (size_t i = 1; i < vetSize; i++)
  {
    if (vet[i] >= maior)
      maior = vet[i];
  }
  maior++;
  //criando o vet auxiliar
  unsigned int aux[maior] = {0};
  for (size_t i = 0; i < vetSize; i++)
    aux[vet[i]]++;

  //criando o vetor ordenado
  unsigned int vetOrdenado[maior - 1];
  int j = 0;
  for (size_t i = 0; i < maior; i++)
  {
    int tmp = aux[i];
    while (tmp--)
    {
      vetOrdenado[j] = i;
      j++;
    }
  }

  arrayPrint(vet, vetSize);
  arrayPrint(aux, maior);
  arrayPrint(vetOrdenado, maior - 1);
  return 0;
}
