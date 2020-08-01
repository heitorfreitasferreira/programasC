#include <iostream>
using namespace std;
#define max 2020
//int aux[max];
int vet[max];

// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//     cin >> vet[i];

//   for (int i = 0; i < max; i++)
//     aux[vet[i]]++;

//   for (int i = 1; i < max; i++)
//   {
//     if (aux[i] != 0)
//       cout << i << " aparece " << aux[i] << " vez(es)" << endl;
//   }
//   return 0;
// }

int main()
{
  int n, x;
  cin >> n;
  for (size_t i = 0; i < n; i++)
  {
    cin >> x;
    vet[x]++;
  }
  for (int i = 1; i < max; i++)
  {
    if (vet[i] != 0)
      cout << i << " aparece " << vet[i] << " vez(es)" << endl;
  }
  return 0;
}