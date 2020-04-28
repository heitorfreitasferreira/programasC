#include <bits/stdc++.h>
using namespace std;
int main(){
    int vet[10];
    for (int i = 0; i < 10; i++) cin >>vet[i];
    sort(vet, vet+10);
    cout<<"Menor valor: "<<vet[0]<<endl<<"Maior valor: "<<vet[9]<<endl;
}