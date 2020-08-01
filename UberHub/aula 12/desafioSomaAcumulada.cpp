#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout << fixed << setprecision(2);
  int quantidadeDias;
  cout << "Quantos dias: ";
  cin >> quantidadeDias;
  float vetor[quantidadeDias], aux[quantidadeDias];
  for (size_t i = 0; i < quantidadeDias; i++)
  {
    cout << "Lucro do dia " << i + 1 << ": ";
    cin >> vetor[i];
  }
  aux[0] = vetor[0];
  for (size_t i = 1; i < quantidadeDias; i++)
  {
    aux[i] = aux[i - 1] + vetor[i];
  }

  char continuar = 's';
  while (continuar == 's')
  {
    int inicio, fim;
    cin >> inicio >> fim;
    if (inicio < 0 || inicio > quantidadeDias - 1 || fim < inicio || fim > quantidadeDias)
      cout << "Input invalido" << endl;
    else
      cout << "Lucro do dia " << inicio << " ao dia " << fim << ": R$" << aux[fim - 1] - aux[inicio - 2] << endl;
    cout << "Continuar? (s/n) ";
    cin >> continuar;
  }
  cout << "Lucro total: " << aux[quantidadeDias - 1] << endl;
}
