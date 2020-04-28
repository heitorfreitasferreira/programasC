#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cod,quant;
    cin>>cod>>quant;
    cout<<setprecision(2)<<fixed;
    switch (cod)
    {
    case 1:
        cout<<"Total: R$ "<<quant*4.0<<endl;
        break;
    case 2:
        cout<<"Total: R$ "<<quant*4.5<<endl;
        break;
    case 3:
        cout<<"Total: R$ "<<quant*5.0<<endl;
        break;
    case 4:
        cout<<"Total: R$ "<<quant*2.0<<endl;
        break;
    case 5:
        cout<<"Total: R$ "<<quant*1.5<<endl;
        break;    
    default:
        cout<<"Produto nao existe"<<endl;
        break;
    }
}