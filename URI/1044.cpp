#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,maior,menor;
    cin>>x>>y;
    maior=max(x,y);
    menor=min(x,y);
    if(maior%menor==0) cout<<"Sao Multiplos\n";
    else cout<< "Nao sao Multiplos\n";
}