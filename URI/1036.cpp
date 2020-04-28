#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,delta,r_1,r_2;
    cin>>a>>b>>c;
    cout<<setprecision(5)<<fixed;
    delta=(b*b)+((-4)*a*c);
    if(delta<0||a==0)cout<<"Impossivel calcular"<<endl;
    else 
    {
        delta=sqrt(delta);
        r_1=(-b+delta)/(2*a);
        r_2=((-b)-delta)/(2*a);
        cout<<"R1 = "<<r_1<<endl;
        cout<<"R2 = "<<r_2<<endl;
    }
}