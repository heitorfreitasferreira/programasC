#include <bits/stdc++.h>
using namespace std;
#define vetSize 5
void printMat(int mat[vetSize][vetSize])
{
  for (size_t i = 0; i < vetSize; i++)
  {
    cout << "|";
    for (size_t j = 0; j < vetSize; j++)
    {
      if (mat[i][j] < 10)
      {
        cout << "0" << mat[i][j] << '|';
      }
      else
      {
        cout << mat[i][j] << '|';
      }
    }
    if (i < vetSize - 1)
      cout << endl
           << "----------------" << endl;
    else
      cout << endl;
  }
}

int main()
{
  int vet[vetSize] = {5, 9, 6, 7, 1}, mat[vetSize][vetSize] = {0};

  for (size_t i = 0; i < vetSize; i++)
  {
    for (size_t j = 0; j < vetSize; j++)
    {
      int iterador = i, acum = 0;
      while (iterador <= j)
      {
        acum += vet[iterador];
        iterador++;
      }
      mat[i][j] = acum;
    }
  }
  printMat(mat);
  return 0;
}
