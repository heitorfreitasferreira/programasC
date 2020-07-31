// Módulo com funções matemáticas
int fat(int n)
{
  int result = 1;
  for (int i = 1; i < n; i++)
  {
    result *= i;
  }
  return result;
}

int fatRec(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fatRec(n - 1);
}
int areaQuadrado(int lado)
{
  return lado * lado;
}

int areaRetangulo(int comprimento, int lado)
{
  return comprimento * lado;
}