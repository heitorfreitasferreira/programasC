#include <bits/stdc++.h>
using namespace std;
unsigned long long int fat(int x)
{
    if (x==1) return 1;
    if (x==0) return 1;
    else {
        return (x*fat(x-1));
    }
}
int main (){
    int n;
    cin>>n;
    cout<<fat(n)<<endl;
}