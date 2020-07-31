#include <bits/stdc++.h>
void change(int *pvar)
{
  *pvar = 20;
}
using namespace std;
int main(int argc, char const *argv[])
{
  int var = 10, *pvar = &var;
  cout << "Valores iniciais:" << endl;
  cout << "Conteudo: " << *pvar << endl
       << "Endereço: " << pvar << endl;

  change(&var);
  cout << endl
       << "Valores após a função:" << endl;
  cout << "Conteudo: " << *pvar << endl
       << "Endereço: " << pvar << endl;
  return 0;
}
