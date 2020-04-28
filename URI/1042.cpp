#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,maior,menor,meio;
    cin>>a>>b>>c;
    maior=max(max(a,b),max(b,c));
    menor=min(min(a,b),min(b,c));
    if (a!=maior&&a!=menor) meio = a;
    else if ((b!=maior)&&(b!=menor)) meio = b;
    else if ((c!=maior)&&(c!=menor)) meio = c;
    cout<<menor<<endl<<meio<<endl<<maior<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}