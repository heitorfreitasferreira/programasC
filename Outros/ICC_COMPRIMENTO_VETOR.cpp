#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float soma;
    cin>>x;
    int vet[x];
    for (int i = 0; i < x; i++)//lendo as posições do vet
        cin>>vet[i];
    for (int i = 0; i < x; i++)
    {
        soma += (vet[i]*vet[i]);
    }
    soma= sqrt(soma);
    cout<<soma<<endl;
    
    
}