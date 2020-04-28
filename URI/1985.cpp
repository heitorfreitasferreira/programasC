#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    float acum = 0;
    cin>>count;
    for (size_t i = 0; i < count; i++)
    {
        int cod, qnt;
        float valor;
        cin>>cod>>qnt;
        switch (cod)
        {
        case 1001:
            valor = 1.50;
            break;
        
        case 1002:
            valor = 2.50;
            break;
        
        case 1003:
            valor = 3.50;
            break;
        
        case 1004:
            valor = 4.50;
            break;
        
        case 1005:
            valor = 5.50;
            break;
        
        default:
            return 0;
            break;
        }
        acum = acum + (valor * qnt);
    }
    printf("%.2f\n",acum);
}
