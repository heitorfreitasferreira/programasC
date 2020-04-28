#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    cout<<setprecision(1)<<fixed;
    if ((a < (float)(b+c)) && (b < (float)(a+c)) && (c < (float)(b+a))) cout<<"Perimetro = "<<a+b+c<<endl;
    else cout<<"Area = "<<((a+b)*c)/2<<endl;
}