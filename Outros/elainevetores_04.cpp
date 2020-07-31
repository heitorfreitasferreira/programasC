#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float x[n],y[n], acum=0;
    cout<<"Insira os valores do vetor x:\n";
    for (int i = 0; i < n; i++)
        cin>>x[i];

    cout<<"Insira os valores do vetor y:\n";
    for (int i = 0; i < n; i++)
        cin>>y[i];
    for (int i = 0; i < n; i++)
        acum = acum + (x[i]*y[i]);
    cout<<"Produto escalar de x*y = "<<acum<<endl;
    return 0;
}